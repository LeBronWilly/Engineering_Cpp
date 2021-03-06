// prog13_15, 傳遞物件到函數裡
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin                          // 定義視窗類別CWin
{
   private:
     char id;
     int width, height;
     
   public:     
     CWin(char i,int w,int h):id(i),width(w),height(h) // 建構元 
     {}
   
     void compare(CWin *win)        // 以指向物件的指標為引數
     {
        if(this->area() > win->area())
          cout << "Window " << this << " is larger" << endl;
        else
          cout << "Window " << win << " is larger" << endl;
     }
     
	 friend void compare2(CWin *winwin,CWin *winwinwin)        // 以指向物件的指標為引數
     {
        if(winwin->area() > winwinwin->area())
          cout << "Window " << winwin << " is larger" << endl;
        else
          cout << "Window " << winwinwin << " is larger" << endl;
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
   CWin *ptr1=&win1;                // 宣告ptr1指標，並將它指向物件win1
   CWin *ptr2=&win2;                // 宣告ptr2指標，並將它指向物件win2
     
   ptr1->compare(ptr2);             // 用ptr1呼叫compare()，並傳遞ptr2
   ptr2->compare(ptr1);             
   cout<<endl;
   compare2(ptr1,ptr2);
   compare2(ptr2,ptr1);

        
   system("pause");
   return 0;
}
