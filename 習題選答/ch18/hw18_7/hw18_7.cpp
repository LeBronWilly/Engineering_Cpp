// hw18_7,
#include <fstream>   // ���Jfstream���Y��
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   char txt[40];
    ifstream ifile("c:\\donkey.txt",ios::in);
    if(ifile.is_open())
       while(!ifile.eof())
       {
          ifile >> txt;
          cout << txt << endl;
       }
    else
       cout << "�ɮ׶}�ҥ���..."  << endl;
   ifile.close();
   
   system("pause");
   return 0;
}

/* output-------------------------------
�ڦ��@���p���j
�ڱq�Ӥ]���M
--------------------------------------*/
