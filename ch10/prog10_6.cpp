// prog10_6, ��ư}�C���ʺA�O����t�m
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main(void)
{
   int i,*a=new int[7];
   		// ���}�C�t�m�ʺA�O����, �èϫ���a���V�ӰO����
   for(i=0;i<7;i++)	    // ���}�C�����]��
   a[i]=pow(i,2);
   for(i=0;i<7;i++)	    // �L�X�}�C�����e(�ϥΰ}�C��X)
      cout << "a[" << i << "]=" << a[i] << "\t";
   cout << endl;
   for(i=0;i<7;i++)	    // �L�X�}�C�����e(�ϥΫ��п�X)
      cout << "*(a+" << i << ")=" << *(a+i) << "\t";
   cout << endl;
   delete[] a;	     	// ����}�C���ʺA�O����t�m�ϰ�
   a=NULL;			    // �ϫ���a�����V����a��

   system("pause");
   return 0;
}
