// prog8_9, �L�X�ܼƪ���}
#include <iostream>
#include <cstdlib>
using namespace std;
void func(int);           // �ŧi��ƭ쫬
int main(void)
{
   int a=13;
   cout << "In main(),a=" << a << ",address=" << &a << endl;
   func(a);
   system("pause");
   return 0;
}

void func(int a)	      // �ۭq���func()
{	
   cout << "In func(),a=" << a << ",address=" << &a << endl;
   return;
}
