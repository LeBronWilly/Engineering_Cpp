// hw19_3,
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   int array[10];

   try
   {
      for(int i=0;i<=10;i++)
      {
         if(i>9)
            throw "Index out of bound";  // �ߥX�r�ꫬ�A���ҥ~
         if(i*5.0>16.0)
            throw i*5.0;
         if(i*i>60)
            throw i;            // �ߥX��ƫ��A���ҥ~
         else
            array[i]=i*i;
      }
   }
   catch(const char *str)    // �i�����r�ꫬ�A���ҥ~
   {
      cout << "������" << str << "�ҥ~..." <<endl;
   }
   catch(int i)                // �i������ƫ��A���ҥ~
   {
      cout << i << "������ȶW�L60�F" << endl;
   }
   catch(double d)                // �i����double���A���ҥ~
   {
      cout << d << "�j��16.0�F" << endl;
   }

   system("pause");
   return 0;
}

/* output--------------------------------
20�j��16.0�F
---------------------------------------*/
