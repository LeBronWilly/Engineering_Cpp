// prog3_7, ����ǦC���C�L
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   char beep='\a', a=-111;
   int i=beep,b=a;                   // �Nbeep���ȳ]��i
   cout << "beep=" << beep << endl;   // �L�Xbeep����
   cout << "i=" << i << endl;
   cout << "a=" << a << endl;   // �L�Xbeep����
   cout << "b=" << b << endl;
   cout << "size=" <<sizeof(a)<<endl;
   printf("THE END\n");
   system("pause");
   return 0;
}
