// hw7_23,
#include <iostream>
#include <cstdlib>
using namespace std;
int main(int argc, char *argv[])
{
   int n=atoi(argv[1]);
   if(n==0)
      cout << n << "�O�s" << endl;
   else if(n%2==0)
      cout << n << "�O����" << endl;
   else
      cout << n << "�O�_��" << endl;
      
   system("pause");
   return 0;
}

/* output---------------
C:\C++>hw7_23 9
9�O�_��
----------------------*/
