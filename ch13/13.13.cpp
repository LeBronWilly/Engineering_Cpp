// prog13_16, 傳遞物件的參照到函數裡
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin                          // 定義視窗類別CWin
{
   private:
     int width, height;
     
   public:     
     char id;
	 CWin(char i,int w,int h):id(i),width(w),height(h)  // 建構元 
     {}
   
     CWin &compare(CWin &win)	    // compare()可接收物件的參照
     {
        if(this->area() > win.area())
            return *this;
         else
            return win;
     }
     
     CWin compare2(CWin &win)	    // compare()可接收物件的參照
     {
        if(this->area() < win.area())
            return *this;
         else
            return win;
     }
     
     int area(void)  			    // 成員函數area()
     {
        return width*height;	    // 傳回物件的面積值
     }  
};

int main(void)
{
   CWin win1('A',70,80);		
   CWin win2('B',60,90); 		
   CWin win3('+',878787,787878);
   win3=win1.compare(win2);
   cout << "Window " << win3.id << " is larger" << endl;
   win3=win2.compare2(win1);
   cout << "Window " << win3.id << " is smaller" << endl;
   
//   win1.compare(win2);	            // 用win1呼叫compare()，並傳遞win2
//   win1.compare(win3);
        
   system("pause");
   return 0;
}
