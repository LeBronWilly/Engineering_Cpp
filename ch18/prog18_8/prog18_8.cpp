//prog18_8, �N���󪺤��e�g�J�G�i����  
#include <fstream>   		          // ���Jfstream���Y��
#include <iostream>
#include <cstdlib>
using namespace std;
class CStudent
{
   protected:
      char name[40];
      int age;
   public:
      void get_data(void)   	      // ������ơA�Ψӿ�J���󪺸�Ʀ���
      {
         cout << "Enter name: "; cin >> name;
         cout << "Enter age: "; cin >> age;  
      }
      void show_data(void)   	     // ������ơA�Ψ���ܪ��󪺸�Ʀ���
      {
         cout << "Name: " << name << endl;
         cout << "Age: "  << age << endl;  
      }            
};

int main(void)
{
   CStudent st;    
   st.get_data();
      
   ofstream ofile("c:\\student.dat",ios::binary);
   
   ofile.write((char*) &st,sizeof(st));          // �N����g�J�G�i���ɤ�
   cout << "��Ƥw�g�J�ɮפ�..." << endl;
   
   ofile.close();       		     // �����ɮ�
   system("pause");
   return 0;
}
