// prog8_5, �G���}�C���ϥ� 
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   int i,j,sum=0;
   int sale[2][4]={{30,35,26,32},{33,34,30,29}};    // �ŧi�}�C�ó]�w���
   for(i=0;i<2;i++)	                                // ��X�P��q�íp���`�P��q
   {
      cout << "�~�ȭ�" << (i+1) << "���~�Z���O�� ";
      for(j=0;j<4;j++)
      {
	      cout << sale[i][j] << " ";
	      sum+=sale[i][j];
      }
      cout << endl;
   }
   cout << endl << "���~���`�P��q��" << sum << "����" << endl;
   system("pause");
   return 0;
}
