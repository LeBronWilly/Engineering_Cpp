// prog10_8, ���лP�ѷ�
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   int a=10,&ref=a;				     // �ŧi�ܼ�a�Ψ�ѷ�ref
   int b=15,*ptr;     				 // �ŧi�ܼ�b�Ϋ���ptr
   ptr=&b;             				 // �Nptr���Vb
   cout << a << "+" << b << "=";     // �L�Xa+b�����G
   cout << (ref+23)+*ptr << endl;    // �Q�Ϋ��лP�ѷӧ���
   ref=6;
   cout << a << "+" << b << "=";     // �L�Xa+b�����G
   cout << (ref+23)+*ptr << endl;    // �Q�Ϋ��лP�ѷӧ���

   system("pause");
   return 0;
}
