// prog3_2, �L�X�U�ظ�ƫ��A������
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   //�w�q�U�ظ�ƫ��A���ܼ�
   unsigned int i=0;
   unsigned short int j=0;
   char ch=' ';
   float f=0.0f;
   double d=0.0;

   //�L�X�U�ظ�ƫ��A������
   cout << "sizeof(int)=" << sizeof(int) << endl;
   cout << "sizeof(long int)=" << sizeof(long int) << endl;
   cout << "sizeof(unsigned int)=" << sizeof(i) << endl;
   cout << "sizeof(short int)=" << sizeof(short int) << endl;
   cout << "sizeof(unsigned short int)=" << sizeof(j) << endl;
   cout << "sizeof(char)=" << sizeof(ch) << endl;
   cout << "sizeof(float)=" << sizeof(f) << endl;
   cout << "sizeof(double)=" << sizeof(d) << endl;
   cout << "sizeof(bool)=" << sizeof(bool) << endl;
   system("pause");
   return 0;
}
