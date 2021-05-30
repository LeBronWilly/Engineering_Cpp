// prog13_8, 由函數傳回類別型態的變數
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin                            // 定義視窗類別CWin
{
   private:
     char id;
     int width, height;
     
   public:     
     CWin(char i='C',int w=100,int h=55):id(i),width(w),height(h)   // 建構元 
     {}
   
     friend CWin compare(CWin win7,CWin win8)   
     {
        if(area(win7) >= area(win8))
          return win7;	              // 傳回呼叫compare()的物件
        else 
          return win8;		          // 傳回compare()所接收的引數
     }
     friend CWin compare2(CWin win7,CWin win8)   
     {
        if(area(win7) <= area(win8))
          return win7;	              // 傳回呼叫compare()的物件
        else 
          return win8;		          // 傳回compare()所接收的引數
     }
     friend int area(CWin winXP)  
     {
        return winXP.width*winXP.height;
     }  
     friend char get_id(CWin win10) 		          // 成員函數，用來顯示資料成員id的值
     {
        return win10.id;
     }
};

int main(void)
{
   CWin win1('A',70,80);		      // 建立win1物件
   CWin win2('B',70,90); 		      // 建立win2物件	
//   CWin win3; 
   
   cout << "Window " << get_id(compare(win1,win2));
   cout << " is larger." << endl;
   cout << "Window " << get_id(compare2(win1,win2));
   cout << " is smaller." << endl;
   
   system("pause");
   return 0;
}
