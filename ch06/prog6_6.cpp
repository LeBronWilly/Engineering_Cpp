// prog6_6, inline���
#include <iostream>
#include <cstdlib>
using namespace std;
inline void star(void) 	// �ۭq�����star(), ø�s�P��
{
   cout << "************" << endl;
}

int main(void)       		// �D�{�� 
{
   star();
   cout << "Hello, C++" << endl;
   star(); 
   system("pause");
   return 0;
}
