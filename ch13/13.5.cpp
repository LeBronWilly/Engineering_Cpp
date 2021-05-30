// prog13_7, 傳遞物件到函數裡
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin                      // 定義視窗類別CWin
{
   private:
     char id;
     int width, height;
     
   public:     
     CWin(char i,int w,int h):id(i),width(w),height(h)  // 建構元 
     {}
   
     friend void compare(CWin winwin,CWin winwinwin)
     {
        if(winwin.area() > winwinwin.area())
          cout << "Window " << winwin.id << " is larger" << endl;
        else
          cout << "Window " << winwinwin.id << " is larger" << endl;
     }
     int area(void)             // 成員函數，用來顯示資料成員的值
     {
        return width*height;
     }  
};

int main(void)
{
   CWin win1('A',70,80);		// 建立win1物件
   CWin win2('B',60,90); 		// 建立win2物件	
 
   compare(win1,win2);  
        
   system("pause");
   return 0;
}
