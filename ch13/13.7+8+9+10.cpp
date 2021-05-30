// prog13_10, 傳遞物件陣列到函數裡
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin                                  // 定義視窗類別CWin
{
   private:
     char id;
     int width, height;
     
   public:     
     void set_member(char i,int w,int h)
     {
        id=i;
        width=w;
        height=h;
     }
     int area(void) 
     {
        return width*height;
     }
     
     static void staticlargest(CWin *win, int n){  // 定義靜態函數largest
     	int max=0,indexmax;
   		for(int i=0; i<n; i++){
      		if(win[i].area()>max){			        // 判別面積是否比max還大
          		indexmax=i;				
          		max=win[i].area();
      		}
    	}
    	cout << "largest window= " << win[indexmax].id << endl;    // 印出id成員
	 }
	 
	 static float average(CWin w[], int n){
	 	float a=0.0;
	 	for(int i=0;i<n;i++){
	 		a+=w[i].area();
		 }
		return a/float(n);
	 }
	 
	 
	 
	 void smallest(CWin *win, int n){  // 定義友誼函數smallest
     	int min=999999999,indexmin;
   		for(int i=0; i<n; i++){
      		if(win[i].area()<min){			        // 判別面積是否比min還小 
          		indexmin=i;				
          		min=win[i].area();
      		}
    	}
    	cout << "smallest window= " << win[indexmin].id << endl;    // 印出id成員
	 }		    
};



int main(void)
{
   CWin win[4];
   
   win[0].set_member('A',60,70);
   win[1].set_member('B',40,60);   
   win[2].set_member('C',83,43);   
   win[3].set_member('D',100,45);
   
   CWin::staticlargest(win,sizeof(win)/sizeof(win[0]));                          // 呼叫largest()函數
   win[2].staticlargest(win,sizeof(win)/sizeof(win[0]));                          // 呼叫largest()函數
   win[0].smallest(win,sizeof(win)/sizeof(win[0]));

   cout<<"average="<<CWin::average(win,sizeof(win)/sizeof(win[0]));
   
   system("pause");
   return 0;
}
