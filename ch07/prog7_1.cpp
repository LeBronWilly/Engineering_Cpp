// prog7_1, ��ƪ��ǭ� 
#include <iostream>
#include <cstdlib>
using namespace std;
void add10(int,int);
int main(void)
{
   int a=20,b=50;
   cout << "before calling add10(): ";
   cout << "a=" << a << ", b=" << b << endl;  // �L�Xa�Bb����
   add10(a,b);
   cout << "after called add10(): ";
   cout << "a=" << a << ", b=" << b << endl;  // �L�Xa�Bb����
   system("pause");
   return 0;
}

void add10(int i,int j)
{
   i=i+10;
   j=j+10;
}
