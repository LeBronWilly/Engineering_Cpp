//prog18_2, �N��ƪ��[��w�s�b����r��  
#include <fstream>                              // ���Jfstream���Y��
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   ofstream afile("c:\\donkey.txt",ios::app);   // �إ�afile����
   
   if(afile.is_open())                          // �����ɮ׬O�_�Q�}��
   {
      afile << "���@�ѧڤߦ�Ӽ��M�ۥh����";    // �N�r��g�J�ɮ�

      cout << "�w�N�r����[���ɮפF..." <<endl; 
   }
   else 
      cout << "�ɮ׶}�ҥ���..."  << endl; 
   
   afile.close();                               // �����ɮ�
  
   system("pause");
   return 0;
}
