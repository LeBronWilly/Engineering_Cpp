// hw18_11a,
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
   CStudent st[3];   
   st[0].get_data();
   st[1].get_data();
   st[2].get_data();
   ofstream ofile("c:\\student.dat",ios::binary|ios::app);
      
   ofile.write((char*) &st[0],sizeof(st[0]));   // �N����g�J�G�i���ɤ�
   ofile.write((char*) &st[1],sizeof(st[1]));   // �N����g�J�G�i���ɤ�
   ofile.write((char*) &st[2],sizeof(st[2]));   // �N����g�J�G�i���ɤ�
   cout<< "��Ƥw�g�J�ɮפ�..."<<endl;

   ofile.close();       // �����ɮ�
   system("pause");
   return 0;
}

/* output-------------------------------
Enter name: Alice
Enter age: 18
Enter name: Tippi
Enter age: 16
Enter name: Jack
Enter age: 17
��Ƥw�g�J�ɮפ�...
--------------------------------------*/
