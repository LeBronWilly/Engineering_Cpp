// prog6_10, �R�A�~���ܼ�
#include <iostream>
#include <cstdlib>
using namespace std;
static int a;               // �w�q�R�A�~������ܼ�a
void odd(void);    	        // ��ƭ쫬���ŧi 
int main(void)
{   
   odd();	      	        // �I�sodd()���
   cout << "after odd(), a=" << a << endl;
   system("pause");
   return 0;
}

void odd(void)		        // �ۭq���odd()�A�P�_a���_�ƩάO����
{
   a=10;
   if(a%2==1)
      cout << "a=" << a << ", a�O�_��" << endl;   // �L�Xa���_��
   else
      cout << "a=" << a << ", a�O����" << endl;   // �L�Xa������
   return;
}
