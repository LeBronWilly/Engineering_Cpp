// hw6_19,
#include <iostream>
#include <cstdlib>
using namespace std;
double km(register double);
int main(void)
{ 
   register double m;
   for(m=60;m<=100;m+=10)
      cout << m << "�^��=" << km(m) << "����" << endl; 
 
   system("pause");
   return 0;
}

double km(register double mls)
{  
   return 1.6*mls;
}

/* output-----------------
60�^��=96����
70�^��=112����
80�^��=128����
90�^��=144����
100�^��=160����
------------------------*/
