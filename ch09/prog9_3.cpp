// prog9_3, �����ܼƪ��ϥ�
#include <iostream> 
#include <cstdlib>
using namespace std;
int main(void)
{
   int a=5,b=3;
   int *ptr; 		         // �ŧi�����ܼ�ptr
   cout << "(��l)&ptr=" << &ptr << ", ptr=" << ptr << endl;
   ptr=&a;			         // �Na����}�]������ptr�s��
   cout << "&a=" << &a << ", &ptr=" << &ptr;
   cout << ", ptr=" << ptr << ", *ptr=" << *ptr << endl;
   ptr=&b;          	     // �Nb����}�]������ptr�s��
   cout << "&b=" << &b << ", &ptr=" << &ptr;
   cout << ", ptr=" << ptr << ", *ptr=" << *ptr << endl;
   
   system("pause");
   return 0;
}
