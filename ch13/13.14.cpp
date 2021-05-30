// prog13_11, 簡單的範例, 實例變數與實例方法 
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin                                  // 定義視窗類別CWin
{
   private:
     char id;
     int width, height;
     
   public:     
//     CWin(char i,int w,int h):id(i),width(w),height(h)  
//     {}

     void show_member(void) 
     {
        cout << "Window " << id << ": ";
        cout << "width=" << width << ", height=" << height << endl;
     }
     friend void set_data(CWin &win,char a,int b, int c){
     	win.id=a;
     	win.width=b;
     	win.height=c;
	 }
	 friend void set_data(CWin &win,char a,int b){
     	win.id=a;
     	win.width=b;
     	win.height=50;
	 }
	 friend void set_data(CWin &win,char a){
     	win.id=a;
     	win.width=40;
     	win.height=70;
	 }
	 friend void set_data(CWin &win){
     	win.id='T';
     	win.width=69;
     	win.height=52;
	 }
};

int main(void)
{
   CWin win1; 	
   CWin win2;
   CWin win3;
   CWin win4;
   CWin win5;
   
   set_data(win1,'A',50,40);
   set_data(win2,'B',60,80);
   set_data(win3,'C',60);
   set_data(win4,'D');
   set_data(win5);
   
   win1.show_member();  
   win2.show_member();
   win3.show_member();
   win4.show_member();
   win5.show_member();
      
   system("pause");
   return 0;
}
