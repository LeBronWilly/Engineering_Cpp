// hw8_17,
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   int i,j;   
   char a[26]={'\0'};   
   for(i=0;i<26;i++)
      a[i]=char(i+97);
   cout << "�п�ܦC�L(1)�_��Ʀr�� (2)����Ʀr��: ";
   cin  >> j;
   if(j%2==0)
      for(i=1;i<=25;i+=2)
         cout << a[i] <<" "; 
   else 
      for(i=0;i<=24;i+=2)
         cout << a[i] <<" ";    
   cout << endl;
   
   system("pause");
   return 0;
}

/* output---------------------------------------------
�п�ܦC�L(1)�_��Ʀr�� (2)����Ʀr��: 1
a c e g i k m o q s u w y
----------------------------------------------------*/
