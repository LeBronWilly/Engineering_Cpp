// prog11_5, ���c�P���
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
struct mydata				               // �w�q���c
{
   string name;
   int age;
};
void func(struct mydata);                  // ��ƭ쫬 
int main(void)
{
   struct mydata woman={"Mary Wu",5};      // �ŧi���c�ܼ�
   cout << "before process..." << endl;   
   cout << "In main(), " << woman.name;    // �L�X���c�ܼƤ��e
   cout << "'s age is " << woman.age << endl;
   cout << "after process..." << endl;
   func(woman);	         		           // �I�sfunc()���
   cout << "In main(), " << woman.name;
   cout << "'s age is " << woman.age << endl;
   
   system("pause");
   return 0;
}

void func(struct mydata a)	               // �ۭq���func()
{
   a.age+=10;
   cout << "In func(), " << a.name;        // �L�X���c�ܼƤ��e
   cout << "'s age is " << a.age << endl;
   return;
}
