// prog9_12, ��ƫ��Ъ��ϥ� 
#include <iostream>
#include <cstdlib>
using namespace std;
int square(int);            // �w�qsquare()��ƪ��쫬
int main(void)
{
   int (*pf)(int);          // �w�q��ƫ���pf
   pf=&square;               // �Ϩ�ƫ���pf���Vsquare()�A&�q�`�ٲ� 
   cout << "square(5)=" << (*pf)(5) << "  pf="<< pf<< endl;        // �L�Xsquare(5)����
   system("pause");
   return 0;
}

int square(int a)           // �ۭq���square(), �p�⥭��� 
{
   return (a*a);
}
