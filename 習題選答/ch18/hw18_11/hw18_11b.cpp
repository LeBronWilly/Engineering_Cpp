// hw18_11b,
#include <fstream>   // ���Jfstream���Y��
#include <iostream>
#include <cstdlib>
using namespace std;
class CStudent
{
   protected:
      char name[40];
      int age;
   public:
      void get_data(void)   // ������ơA�Ψӿ�J���󪺸�Ʀ���
      {
         cout << "Enter name: "; cin >> name;
         cout << "Enter age: "; cin >> age;
      }
      void show_data(void)   // ������ơA�Ψ���ܪ��󪺸�Ʀ���
      {
         cout << "Name: " << name << endl;
         cout << "Age: "  << age << endl;
      }
};

int main(void)
{
   ifstream ifile("c:\\student.dat",ios::binary);  // �}�ҤG�i����
   CStudent st;
   if(ifile.is_open())
   {
      ifile.read((char*) &st,sizeof(st));
      while(!ifile.eof())
      {
         st.show_data();
         ifile.read((char*) &st,sizeof(st));  // �q�G�i���ɤ�Ū�����
      }
      cout << "�G�i���ɤw�QŪ���F..." << endl;
   }
   else
      cout << "�ɮ׶}�ҥ���..." << endl;

   ifile.close();       // �����ɮ�
   system("pause");
   return 0;
}

/* output-------------------------------
Name: Alice
Age: 18
Name: Tippi
Age: 16
Name: Jack
Age: 17
�G�i���ɤw�QŪ���F...
--------------------------------------*/
