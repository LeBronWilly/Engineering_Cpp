// hw8_5,
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   int i,j,sum[3]={0},sum1[5]={0};
   int maxs=sum[0];
   int maxp=sum1[0];
   int s=0,p=0;
   int sale[3][5]={{33,32,56,45,33},
                   {77,33,68,45,23},
                   {43,55,43,67,65}};  
   int product[5]={12,16,10,14,15};
   for(i=0;i<3;i++)   
   {
      cout << "�P���" << (i+1) << "���P��q�� ";
      for(j=0;j<5;j++)
         cout << sale[i][j] << " ";
      cout << endl;
   } 
   cout << endl;
   cout << "(a)�C�ӾP����P���`���B�p�U: " << endl; 
   for(i=0;i<3;i++)   
   {
      for(j=0;j<5;j++)
         sum[i]=sum[i]+ sale[i][j]*product[j] ;
      cout << "�P���" << i+1 << "���P���`���B " << sum[i] <<endl;
   } 
   cout << endl <<"(b)�C�����~�P���`���B�p�U: " << endl;
   for(j=0;j<5;j++)
   {
      for(i=0;i<3;i++)
         sum1[j]=sum1[j]+sale[i][j]*product[j];
      cout << "���~" << char(j+65);
      cout << "���P���`���B " << sum1[j] << endl;
   }
   for(i=0;i<3;i++)
      if(sum[i]>maxs)
      {
         maxs=sum[i];
         s=i;
      }  
   cout << endl << "(c)�~�Z�̦n���P���: ";
   cout << "�P���" << s+1 << endl;      
  
   for(j=0;j<5;j++)
      if(sum1[j]>maxp)
      {
         maxp=sum1[j]; 
         p=j;
      }        
   cout << endl << "(d)�P����B�̦h�����~: ";
   cout << "���~" << char(p+65) << endl;  
   
   system("pause");
   return 0;
}

/* output--------------------------------
�P���1���P��q�� 33 32 56 45 33
�P���2���P��q�� 77 33 68 45 23
�P���3���P��q�� 43 55 43 67 65

(a)�C�ӾP����P���`���B�p�U:
�P���1���P���`���B 2593
�P���2���P���`���B 3107
�P���3���P���`���B 3739

(b)�C�����~�P���`���B�p�U:
���~A���P���`���B 1836
���~B���P���`���B 1920
���~C���P���`���B 1670
���~D���P���`���B 2198
���~E���P���`���B 1815

(c)�~�Z�̦n���P���: �P���3

(d)�P����B�̦h�����~: ���~D
---------------------------------------*/
