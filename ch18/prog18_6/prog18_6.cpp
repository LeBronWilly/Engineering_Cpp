//prog18_6, �G�i���ɼg�J���m�� 
#include <fstream> 		// ���Jfstream���Y��
#include <iostream>
#include <cstdlib>
#include <cmath> 		// ���J�ƾǨ�Ʈwcmath
using namespace std;
int main(void)
{
   double num;  
   ofstream ofile("c:\\binary.dat",ios::binary);    // �}�ҥi�Ѽg�J���G�i����
   
   for(int i=1;i<=5;i++)
   {
      num=sqrt((double)i);  // �Ni�নdouble�A�A�p��sqrt(i)
      ofile.write((char*)&num,sizeof(num));         // �Nnum�g�J�G�i����
   }
   cout << "�w�N��Ƽg�J�G�i���ɤF..." << endl;
   
   ofile.close();       	// �����ɮ�
   
   system("pause");
   return 0;
}
