// prog7_10, �ϥ�#define
#include <iostream>
#include <cstdlib>
using namespace std;
#define PI 3.14
void peri(double),area(double);
int main(void)
{
   double r=1.0;
   cout << "pi=" << PI << endl;
   cout << "radius=" << r << endl;
   peri(r);		                // �I�s�ۭq�����
   area(r);
   system("pause");
   return 0;
}

void peri(double r)	            // �ۭq�����peri()�A�L�X��P 
{
   cout << "peripheral length=" << 2*PI*r << endl;
   return;
}

void area(double r)	            // �ۭq�����area()�A�L�X�ꭱ�n 
{
   cout << "area=" << PI*r*r << endl;
   return;
}
