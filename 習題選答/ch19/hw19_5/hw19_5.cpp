// hw19_5,
#include <iostream>
#include <cstdlib>
using namespace std;
int fact(int);
int main(void)
{
   int num;
   cout << "Input an integer: ";
   cin >> num;

   if(fact(num)!=-1)
     cout << "fact(" << num << ")=" << fact(num) << endl;
   else
     cout << "input error" << endl;

   system("pause");
   return 0;
}

int fact(int n)
{
   int prd=1;
   double prdf=1.0;
   try
   {
      if(n<0)  throw "argument out of bound";  // �ߥX�r�ꫬ�A���ҥ~
      for(int i=1;i<=n;i++)
      {
         if(n==0)
            return 1;
         else if(prdf>2147483647.)
            throw "number too large";  // �ߥX�r�ꫬ�A���ҥ~
         else
         {
            prdf=prdf*i;
            prd=prd*i;
         }
      }
   }
   catch(const char *str)    // �i�����r�ꫬ�A���ҥ~
   {
      cout << "������" << str << "�ҥ~..." << endl;
      return -1;
   }
    return prd;
}

/* output--------------------------------
Input an integer: 100
������number too large�ҥ~...
input error
---------------------------------------*/
