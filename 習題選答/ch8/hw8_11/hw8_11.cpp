// hw8_11,
#include <iostream>
#include <cstdlib>
using namespace std;
int find_min(int [][3]);
int main(void)
{
   int a[3][3]={{21,85,39},{30,72,14},{69,53,41}};
   cout << "�}�C���e��" << endl; 
   for(int i=0;i<3;i++)
   {
      for(int j=0;j<3;j++)
         cout << a[i][j] << " ";
      cout << endl;
   }   
   cout << "�G���}�C��, �̤p�Ȭ� " << find_min(a) << endl;
   
   system("pause");
   return 0;
}  

int find_min(int a[3][3])            
{
   int i,j,n,m,min=a[0][0];
   for(i=0;i<3;i++)
      for(j=0;j<3;j++)
         if(a[i][j]<min)     
         {   
            min=a[i][j];
            n=i;
            m=j;
         }   
   cout << "���ЭȬ� [" << n << "][" << m << "]" << endl; 
   return min;     
}

/* output------------------
�}�C���e��
21 85 39
30 72 14
69 53 41
���ЭȬ� [1][2]
�G���}�C��, �̤p�Ȭ� 14
-------------------------*/
