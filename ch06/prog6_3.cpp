// prog6_3, �I�s�ۭq���
#include <iostream>
#include <cstdlib>
using namespace std;
void func(int,int);     	// ��ƭ쫬���ŧi 
int main(void)
{
   int a=3,b=6;
   cout << "In main(),a=" << a << ",b=" << b << endl; // �L�Xa,b����
   func(a,b);
   cout << "After func(),a=" << a << ",b=" << b << endl;
   
   system("pause");
   return 0;
}

void func(int a,int b)	// �ۭq�����func()�A�L�Xa,b���� 
{
   a+=10;
   b+=10;
   cout << "In func(),a=" << a << ",b=" << b << endl;
   return;
}
