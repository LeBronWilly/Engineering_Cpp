// prog6_8, �R�A�ϰ��ܼ�
#include <iostream>
#include <cstdlib>
using namespace std;
void func(void);   	// ��ƭ쫬���ŧi 
int main(void)
{
   func();		   	// �I�s�ۭq�����
   func();
   func();
   system("pause");
   return 0;
}

void func(void)	   	// �ۭq�����func()
{
   static int a=10;
   cout << "In func(),a=" << a << endl;   // �L�Xfunc()��a����
   a+=20;
   return;
}
