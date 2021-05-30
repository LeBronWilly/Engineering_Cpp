// prog7_17, 使用自訂的標頭檔area.h
#include <iostream>
#include <cstdlib>
using namespace std;
//#include <area.h> //若標頭檔是在系統所設定的目錄下則可使用系統位址 
#include "area.h" //若標頭檔是在同程式檔的目錄下則可使用相對位址 
//#include "D:\Final4\C++\ch07\prog7_17\area.h" //若在其他處地方則必須指定位址 
int main(void)
{
   float base,height;
   cout << "Input the base of triangle:";
   cin >> base;
   cout << "Input the height of triangle:";
   cin >> height;
   // 計算三角形面積 
   cout << "The area of triangle is " << TRIANGLE(base,height) << endl;
   system("pause");
   return 0;
}
