// hw8_9,
#include <iostream>
#include <cstdlib>
using namespace std;
int find_max(int []); 
int main(void)
{
   int a[4]={2,8,50,7};
   cout << "�}�C���e�� "; 
   for(int i=0;i<4;i++)
      cout << a[i] << " ";
   cout << endl << "�̤j�Ȭ� " << find_max(a) << endl;     
   
   system("pause");
   return 0;
}

int find_max(int a[])
{
   int i,max=a[0];
   for(i=0;i<4;i++)     
      if(max<a[i])
         max=a[i];
   return max;
}

/* output------------
�}�C���e�� 2 8 50 7
�̤j�Ȭ� 50
-------------------*/
