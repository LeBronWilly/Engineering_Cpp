// prog9_18, �N�}�C��n�Ӥ������Ȩ��N��num
#include <iostream>
#include <cstdlib>
using namespace std;
void replace(int *, int, int);            // �ŧireplace()��ƪ��쫬
int main(void)
{
   int a[5]={1,2,3,4,5};
   int i,num=100;
   cout << "�m���e�A�}�C�����e�� ";
   for(i=0;i<5;i++)			            // �m���e�L�X�}�C�����e
      cout << *(a+i) << " ";
   cout << endl;
   replace(a,4,num);			        // �I�s���replace()
   cout << "�m����A�}�C�����e�� ";
   for(i=0;i<5;i++)			            // �m����L�X�}�C�����e
      cout << a[i] << " ";
   cout << endl;
   
   system("pause");
   return 0;
}
void replace(int *ptr,int n,int num)
{
   *(ptr+n-1)=num;      		        // �N�}�C��n�Ӥ����]�Ȭ�num
   return;
}
