//prog19_1, �ҥ~��²��d��, try-catch�϶����ϥ� 
#include <iostream>   
#include <cstdlib>
using namespace std;
int main(void)
{
   int array[5];
   
   try                                        // try�϶��A�b���϶����i�i��ҥ~���ˬd
   {
      for(int i=0;i<=10;i++)
      {
         if(i>=5)                          	  // �Y���ЭȤj�󵥩�5
            throw "Index out of bound";       // �ߥX�ҥ~
         else 
         {
            array[i]=i*i;
            cout << "array[" << i << "]=" << array[i] << endl;
         }
      }
   }
   catch(const char *str)                     // catch�϶�
   {
      cout << "������" << str << "�ҥ~..." << endl;
   }    
   
   system("pause");
   return 0;
}
