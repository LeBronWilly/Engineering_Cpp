// prog13_11, ²�檺�d��, ����ܼƻP��Ҥ�k 
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin                                  // �w�q�������OCWin
{
   private:
     char id;
     int width, height;
     
   public:     
     CWin(char i,int w,int h):id(i),width(w),height(h)  
     {}

     void show_member(void) 
     {
        cout << "Window " << id << ": ";
        cout << "width=" << width << ", height=" << height << endl;
     }
};

int main(void)
{
   CWin win1('A',50,40); 	
   CWin win2('B',60,80);
   
   win1.show_member();  
   win2.show_member();     
      
   system("pause");
   return 0;
}
