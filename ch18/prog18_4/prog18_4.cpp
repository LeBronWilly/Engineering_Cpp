//prog18_4, �Q��put()�N�r��g�J�ɮ�
#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   char txt[]="Welcome to the C++ world" ;     // �إߦr���}�C
   int i=0;
   
   ofstream ofile("c:\\welcome.txt",ios::out);
   
   while(txt[i] != '\0')  	                   // �P�Otxt[i]�r���O�_���r�����
   {
      ofile.put(txt[i]);  		               // �N�r��txt[i]�g�J�ɮ�
      i++; 
   }
   cout << "�r��g�J����..." << endl;
   ofile.close();
  
   system("pause");
   return 0;
}
