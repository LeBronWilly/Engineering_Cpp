// prog11_6, �N���c�����O�ǻ�����
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
struct mydata	                    // �w�q���c
{
   string name;
   int math;
   int eng;
};
float avg(int,int);                 // ��ƭ쫬 
int main(void)
{
   struct mydata num={"Alice",71,80};                   // �ŧi���c�ܼ�
   cout << num.name << "'s Math score=" << num.math;    // �L�X���c�ܼƤ��e
   cout << endl << "English score=" << num.eng << endl;
   cout << "average=" << avg(num.math,num.eng) << endl;
   
   system("pause");
   return 0;
}

float avg(int a,int b)	            // �ۭq���avg()
{	
   return (float)(a+b)/2;
}
