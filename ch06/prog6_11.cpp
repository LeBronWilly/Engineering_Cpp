// prog6_11, �Ȧs���ܼ�
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;
int main(void)
{
   time_t start,end;
   register int i=5643,j=15613;            // �w�q�Ȧs������ܼ�i�Pj
   start=time(NULL);	        // �O���}�l�ɶ�
   for(i=1;i<=50;i++)
   {
      for(j=1;j<=50;j++)
      {   
         cout << setw(2) << i << "*" << setw(2) << j;
         cout << "=" << setw(4) << i*j << "\t";
         if (j%10==0) cout<< "\n";
      }
      cout << endl;
   }
   end=time(NULL);	            // �O�������ɶ�
   cout << "It spends " << difftime(end,start) << " seconds";
   system("pause");
   return 0;
}
