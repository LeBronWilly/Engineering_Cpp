//hw20_9,
#include <iostream>
#include <cstdlib>
#define STR "Hello C++"  		// �w�q STR ��"Hello C++"�r��
using namespace std;
int main(void)
{
   #ifndef STR              		// �p�GSTR�S���Q�w�q
      cout << "STR not defined" << endl;
   #else               			   // STR���Q�w�q
      cout << STR << endl;
   #endif
   
   system("pause");
   return 0;
}

/* output-------------------------------
Hello C++
--------------------------------------*/
