//prog18_9, �q�G�i���ɸ�Ū�����󪺸��
#include <fstream>   			// ���Jfstream���Y��
#include <iostream>
#include <cstdlib>
using namespace std;
class CStudent
{
   protected:
      char name[40];
      int age;
   public:
      void get_data(void)    	// ������ơA�Ψӿ�J���󪺸�Ʀ���
      {
         cout << "Enter name: "; cin >> name;
         cout << "Enter age: ";  cin >> age;  
      }
      void show_data(void)		// ������ơA�Ψ���ܪ��󪺸�Ʀ���
      {
         cout << "Name: " << name << endl;
         cout << "Age: "  << age << endl;  
      }            
};

int main(void)
{
   CStudent st;
      
   ifstream ifile("c:\\student.dat",ios::binary);
   
   ifile.read((char*) &st,sizeof(st));
   st.show_data();
   
   ifile.close();       		// �����ɮ�

   system("pause");
   return 0;
}
