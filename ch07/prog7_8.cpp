// prog7_8, �޼ƪ��w�]��
#include <iostream>
#include <cstdlib>
using namespace std;
double circle(double,double pi=3.14);    // ��ƭ쫬,��2�Ӥ޼ƹw�]��3.14
int main(void)
{
   cout << "circle(2.0,3.14159)=" << circle(2.0,3.14159) << endl;
   cout << "circle(2.0)=" << circle(2.0) << endl; 
   system("pause");
   return 0;
}

double circle(double r, double pi)	     // circle()��ƪ��w�q�A�p��ꭱ�n
{
	return (pi*r*r);
}
