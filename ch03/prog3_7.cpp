// prog3_7, 跳脫序列的列印
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   char beep='\a', a=-111;
   int i=beep,b=a;                   // 將beep的值設給i
   cout << "beep=" << beep << endl;   // 印出beep的值
   cout << "i=" << i << endl;
   cout << "a=" << a << endl;   // 印出beep的值
   cout << "b=" << b << endl;
   cout << "size=" <<sizeof(a)<<endl;
   printf("THE END\n");
   system("pause");
   return 0;
}
