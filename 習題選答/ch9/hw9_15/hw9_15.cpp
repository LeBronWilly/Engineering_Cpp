// hw9_15,
#include <iostream>
#include <cstdlib>
using namespace std;
void square(int *);
int main(void)
{
   int i, a[5]={1,2,3,4,5};
   cout << "�}�C���e�� ";
   for(i=0;i<5;i++)
      cout << *(a+i) << " ";
   square(a);
   cout << endl << "�N�C�Ӥ�������, ���G�� ";
   for(i=0;i<5;i++)
      cout << *(a+i) << " ";
   cout << endl;

   system("pause");
   return 0;
}
void square(int *arr)
{
   for(int i=0;i<5;i++)
      *(arr+i)=(*(arr+i)) * (*(arr+i));
   return;
}

/* output---------------------------
�}�C���e�� 1 2 3 4 5
�N�C�Ӥ�������, ���G�� 1 4 9 16 25
----------------------------------*/
