// prog9_1, �L�X�ܼƩ�O���餺����}
#include <iostream> 
#include <cstdlib>
using namespace std;
int main(void)
{
   int a,b=5;		             // �ŧi�ܼ�a�Pb�A���ܼ�a�S���]�w���
   double c=3.14;
   
   cout << "a=" << a << ", sizeof(a)=" << sizeof(a);
   cout << ", ��}��" << &a << endl;
   cout << "b=" << b << ", sizeof(b)=" << sizeof(b);
   cout << ", ��}��" << &b << endl;
   cout << "c=" << c << ", sizeof(c)=" << sizeof(c);
   cout << ", ��}��" << &c << endl;
   
   system("pause");
   return 0;
}
