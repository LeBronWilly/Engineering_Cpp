// prog9_6, ���~�����Ы��A
#include <iostream> 
#include <cstdlib>
using namespace std;
int main(void)
{
   int a1=100, *ptri;
   double a2=3.2, *ptrf;
   ptri=&a2;		// ���~�A�Nint���A�����Ы��Vdouble���A���ܼ�
   ptrf=&a1; 	    // ���~�A�Ndouble���A�����Ы��Vint���A���ܼ�

   cout << "sizeof(a1)=" << sizeof(a1) << endl;
   cout << "sizeof(a2)=" << sizeof(a2) << endl;
   cout << "a1=" << a1 << ", *ptri=" << *ptri << endl;
   cout << "a2=" << a2 << ", *ptrf=" << *ptrf << endl;
   
   system("pause");
   return 0;
}
