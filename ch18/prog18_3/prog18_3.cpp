//prog18_3, �q�ɮ�Ū�J��� 
#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   char txt[40];    			// �إߦr���}�C�A�Ψӱ����r��
   ifstream ifile("c:\\donkey.txt",ios::in);
   
   while(!ifile.eof())		    // �P�O�O�_Ū���ɮת�����
   {
      ifile >> txt;       		// �N�ɮפ��e�g�J�r���}�C
      cout << txt << endl; 
   }
   
   ifile.close();			    // �����ɮ�
   system("pause");
   return 0;
}
