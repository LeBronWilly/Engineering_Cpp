//prog18_5, ��r�ɪ������PŪ��
#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   char txt[80],ch;

   ifstream ifile1("c:\\welcome.txt",ios::in);
   ofstream ofile("c:\\welcome2.txt",ios::out);

   while(ifile1.get(ch))                       // �P�O�O�_Ū���ɮת�����
      ofile.put(ch);
   cout << "��������..." << endl;
   ifile1.close();
   ofile.close();
   
   ifstream ifile2("c:\\welcome2.txt",ios::in);
   while(!ifile2.eof())                        // �P�O�O�_Ū���ɮת�����
   {
      ifile2.getline(txt,80,'\n');
      cout << txt << endl;
   }
   ifile2.close();

   system("pause");
   return 0;
}
