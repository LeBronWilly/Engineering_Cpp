// prog12_8, 在類別定義的內部呼叫函數
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin    		                // 定義視窗類別CWin
{
   public:
     char id;
     int width;   
     int height;
     
     int area(void) 	            // 定義成員函數area(), 用來計算面積
     {                 
        return width*height;
     }
     void show_area(void)           // 定義成員函數show_area(), 用來顯示面積
     {
        cout << "Window " << id << ", area=" << this->area() << endl;
     }
};

int main(void)
{
   CWin win1,win2;   
   
   win1.id='A';
   win1.width=50;
   win1.height=40;
   win1.show_area();  	            // 顯示面積 
   
   win2.id='B';
   win2.width=30;
   win2.height=60;
   win2.show_area();  	            // 顯示面積 
   
   system("pause");
   return 0;
}
