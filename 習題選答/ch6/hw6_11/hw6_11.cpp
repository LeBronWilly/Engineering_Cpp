// hw6_11,
#include <iostream>
#include <cstdlib>
using namespace std;
double centigrade(double);
int main(void)
{
   double f=-40.0;
   cout << "�ؤ�" << f << "��=���";
   cout << centigrade(f) << "��" << endl;
   system("pause");
   return 0;
}

double centigrade(double f)
{
   double c;
   c=(5*f-160)/9;
   return c;
}

/* output------------
�ؤ�-40��=���-40��
-------------------*/
