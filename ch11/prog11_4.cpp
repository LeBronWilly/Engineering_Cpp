// prog11_4, ���c���]��
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
struct mydata	    // �w�q���c
{
   string name;
   int age;
} x;			    // �ŧi���c�ܼ�
int main(void)
{
   struct mydata y={"Lily Chen",18};
   x=y;
   //��X���c�ܼƤ��e
   cout << "x.name=" << x.name << ", x.age=" << x.age << endl;
   cout << "y.name=" << y.name << ", y.age=" << y.age << endl;
   
   system("pause");
   return 0;
}
