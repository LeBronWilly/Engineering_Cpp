//prog19_3, �������󫬺A���ҥ~ 
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
            throw "Index out of range";
         if(i*i>60)
            throw i;
         else
            array[i]=i*i;
      }
   }
   catch(...)            // �i�������󫬺A���ҥ~
   {
      cout << "������ҥ~�F..." << endl;
   }    
   
   system("pause");
   return 0;
}
