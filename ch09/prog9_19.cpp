// prog9_19, ��ƶǦ^�Ȭ�����
#include <iostream>
#include <cstdlib>
using namespace std;
int *maximum(int *);			 // �ŧimaximum()��ƪ��쫬
int main(void)
{
   int a[5]={3,1,7,2,6};
   int i,*ptr;
   cout << "�}�C�����e�� ";
   for(i=0;i<5;i++)			     // �L�X�}�C�����e
      cout << a[i] << " ";
   cout << endl;
   ptr=maximum(a);			     // �I�smaximum()��ơA�öǤJ�}�Ca
   cout << "�̤j�Ȭ�" << *ptr <<"  ��}��" <<ptr << endl;

   system("pause");
   return 0;
}
int *maximum(int *arr)		     // �w�qmaximum()���
{
   int i,*max;
   max=arr;					     // �]�w����max���V�}�C���Ĥ@�Ӥ���
   for(i=1;i<5;i++)
      if(*max < *(arr+i))
         max=arr+i;
   return max; 				     // �Ǧ^�̤j�Ȥ���������}
}
