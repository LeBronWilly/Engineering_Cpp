// hw7_9,
#include <iostream>
#include <cstdlib>
using namespace std;
double trapezoid(int,int,int);
double trapezoid(double,double,double);
int main(void)
{  
   cout << "��Ϊ��W����6, �U����8, ����3, ";
   cout << "���n��" << trapezoid(6,8,3) << endl;
   cout << "��Ϊ��W����4.8, �U����3.7, ����2.5, ";
   cout << "���n��" << trapezoid(4.8,3.7,2.5) << endl;
 
   system("pause");
   return 0;
}

double trapezoid(int upper,int base,int height)
{
	return ((upper+base)*height/2.0);
}

double trapezoid(double upper,double base,double height)
{
	return ((upper+base)*height/2.0);
}

/* output--------------------------------------------
��Ϊ��W����6, �U����8, ����3, ���n��21
��Ϊ��W����4.8, �U����3.7, ����2.5, ���n��10.625
--------------------------------------------------*/
