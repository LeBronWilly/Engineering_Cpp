// prog11_17, �ۭq���A�wtypedef���ϥ�
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   typedef float temper;		               // �w�q�ۭq���A
   temper f,c;				                   // �ŧi�ۭq���A�ܼ�
   cout << "Input Celsius degrees:";
   cin >> c;
   f=(float)(9.0/5.0)*c+32;   	               // �ഫ���� 
   cout << c << " Celsius is equal to ";       // �L�X�ഫ�᪺���G 
   cout << f << " Fahrenheit degrees" << endl;
   
   system("pause");
   return 0;
}
