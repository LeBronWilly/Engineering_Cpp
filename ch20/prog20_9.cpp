//prog20_9, �ϥ�#ifdef�B#else�P#endif���O
#include <iostream>
#include <cstdlib>
#define STR "Hello C++"  		// �w�q STR ��"Hello C++"�r��

using namespace std;
int main(void)
{
   #ifdef STR              		// �p�GSTR���Q�w�q
      cout << STR << endl;
   #else               			// STR�S���Q�w�q
      cout << "STR not defined" << endl;
   #endif
   system("pause");
   return 0;
}
