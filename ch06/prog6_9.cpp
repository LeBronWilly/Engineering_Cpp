// prog6_9, �~���ܼ�
#include <iostream>
#include <cstdlib>
using namespace std;
void peri(double),area(double);     // ��ƭ쫬���ŧi
int main(void)
{
   extern double pi;				// �ŧi�~���ܼ�pi
   double r=1.0;
   cout << "pi=" << pi << endl;
   cout << "radius=" << r << endl;
   peri(r);			                // �I�s�ۭq�����
   area(r);
   system("pause");
   return 0;
}
double pi=3.14;		                // �~���ܼ�pi�]�Ȭ�3.14
void peri(double r)	                // �ۭq�����peri()�A�L�X��P
{
   cout << "peripheral length=" << 2*pi*r << endl;
   return;
}

void area(double r)	                // �ۭq�����area()�A�L�X�ꭱ�n
{
   cout << "area=" << pi*r*r << endl;
   return;
}
