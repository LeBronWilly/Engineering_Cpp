// prog7_17, �ϥΦۭq�����Y��area.h
#include <iostream>
#include <cstdlib>
using namespace std;
//#include <area.h> //�Y���Y�ɬO�b�t�Ωҳ]�w���ؿ��U�h�i�ϥΨt�Φ�} 
#include "area.h" //�Y���Y�ɬO�b�P�{���ɪ��ؿ��U�h�i�ϥά۹��} 
//#include "D:\Final4\C++\ch07\prog7_17\area.h" //�Y�b��L�B�a��h�������w��} 
int main(void)
{
   float base,height;
   cout << "Input the base of triangle:";
   cin >> base;
   cout << "Input the height of triangle:";
   cin >> height;
   // �p��T���έ��n 
   cout << "The area of triangle is " << TRIANGLE(base,height) << endl;
   system("pause");
   return 0;
}
