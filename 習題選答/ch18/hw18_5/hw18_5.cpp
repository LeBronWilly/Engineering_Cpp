// hw18_5,
#include <fstream>   // ���Jfstream���Y��
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   ofstream ofile; // �إ�ofile����
   ofile.open("c:\\donkey.txt",ios::out);

   if(ofile.is_open())   // �����ɮ׬O�_�Q�}��
   {
      ofile << "�ڦ��@���p���j" << endl;
      ofile << "�ڱq�Ӥ]���M" << endl;
      cout << "�w�N�r��g�J�ɮ�..." << endl;
   }
   else
      cout << "�ɮ׶}�ҥ���..."  << endl;

   ofile.close();       // �����ɮ�

   system("pause");
   return 0;
}

/* output-------------------------------
�w�N�r��g�J�ɮ�...
--------------------------------------*/
