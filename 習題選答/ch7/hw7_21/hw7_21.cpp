// hw7_21,
#include <iostream>
#include <cstdlib>
using namespace std;
int main(int argc, char *argv[])
{
   int length=atoi(argv[1]);
   int width=atoi(argv[2]);
   cout << "����Ϊ���=" << length << endl;
   cout << "����Ϊ��e=" << width << endl;
   cout << "����έ��n=" << length*width << endl;
      
   system("pause");
   return 0;
}

/* output---------------
C:\C++>hw7_21 8 4
����Ϊ���=8
����Ϊ��e=4
����έ��n=32
----------------------*/
