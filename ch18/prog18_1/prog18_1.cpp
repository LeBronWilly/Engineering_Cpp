//prog18_1, �N��Ƽg�J��r��  
#include <fstream>   // ���Jfstream���Y��
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   ofstream ofile("c:\\donkey.txt",ios::out);  // �إ�ofile����
   
   if(ofile.is_open())                         // �����ɮ׬O�_�Q�}��
   {
      ofile << "�ڦ��@���p���j" << endl;       // �N�r��g�J�ɮ�
      ofile << "�ڱq�Ӥ]���M" << endl;         // �N�r��g�J�ɮ�       
      cout << "�w�N�r��g�J�ɮ�..." << endl; 
   }
   else 
      cout << "�ɮ׶}�ҥ���..."  << endl; 
   
   ofile.close();                              // �����ɮ�
  
   system("pause");
   return 0;
}
