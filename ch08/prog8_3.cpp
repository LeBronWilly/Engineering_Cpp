// prog8_3, ����}�C�����Ȫ��j�p
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   int A[]={48,75,30,17,62};			            // �ŧi��ư}�CA,�ó]�w���
   int i,min=A[0],max=A[0];
   int length=sizeof(A)/sizeof(int);   	            // �p��}�C�����Ӽ�
   cout << "elements in array A are ";
   for(i=0;i<length;i++)   			                // �L�X�}�C�����e
   {
      cout << A[i] << "  ";
      if(A[i]>max)	                                // �P�_�̤j��
         max=A[i];
      if(A[i]<min)	                                // �P�_�̤p��
         min=A[i];
   }
   cout << endl << "Maximum is " << max;			// �L�X�̤j��
   cout << endl << "Minimum is " << min << endl;	// �L�X�̤p��
   system("pause");
   return 0;
}
