// hw18_9,
#include <fstream>   // ���Jfstream���Y��
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   char txt[1000],ch;
   int j,a=0,e=0,i=0,o=0,u=0,n=0;

    ifstream ifile("c:\\Atlanta.txt",ios::in);

    if(ifile.is_open())
    {
       while(ifile.get(ch)!='\0')
          txt[n++]=ch;

       for(j=0;j<n;j++)
       {
          if (txt[j]=='a')
             a=a+1;
          else if(txt[j]=='e')
             e=e+1;
          else if(txt[j]=='i')
             i=i+1;
          else if(txt[j]=='o')
             o=o+1;
          else if(txt[j]=='u')
             u=u+1;
       }

       cout << "�X�{a,e,i,o,u�r���έp�p�U:" << endl;
       cout << "a=" << a << endl;
       cout << "e=" << e << endl;
       cout << "i=" << i << endl;
       cout << "o=" << o << endl;
       cout << "u=" << u << endl;
    }
    else
       cout << "�ɮ׶}�ҥ���..."  << endl;

   ifile.close();

   system("pause");
   return 0;
}

/* output-------------------------------
�X�{a,e,i,o,u�r���έp�p�U:
a=33
e=43
i=38
o=25
u=8
--------------------------------------*/
