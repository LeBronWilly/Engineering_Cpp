// prog6_7, �ϰ��ܼ�
#include <iostream>
#include <cstdlib>
using namespace std;
void func(void);                           // ��ƭ쫬���ŧi 
int main(void)
{
   auto a=10;
   cout << "In Main(),a=" << a << endl;	   // �L�Xmain()��a����
   func();		                           // �I�s�ۭq�����
   cout << "In Main(),a=" << a << endl;	   // �L�Xa����
   system("pause");
   return 0;
}

void func(void)	                           // �ۭq�����func()
{
   int a=30;
   cout << "In func(),a=" << a << endl;   // �L�Xfunc()��a����
   return;
}
