// hw9_9,
#include <iostream>
#include <cstdlib>
using namespace std;
void cm(double *);
int main(void)
{
   double a,*ptr;
   cout << "�п�J���ഫ��������:";
   cin  >> a;
   ptr=&a;
   cout << a <<"����=";
   cm(ptr);
   cout << a << "�^�T" << endl;

   system("pause");
   return 0;
}
void cm( double *ptr)
{
    *ptr=*ptr*0.394;
    return;
}

/* output---------------
�п�J���ഫ��������:10
10����=3.94�^�T
----------------------*/
