// prog13_7, �ǻ�������Ƹ�
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin                      // �w�q�������OCWin
{
   private:
     char id;
     int width, height;
     
   public:     
     CWin(char i,int w,int h):id(i),width(w),height(h)  // �غc�� 
     {}
   
     void compare(CWin win)
     {
        if(this->area() > win.area())
          cout << "Window " << this->id << " is larger" << endl;
        else
          cout << "Window " << win.id << " is larger" << endl;
     }
     int area(void)             // ������ơA�Ψ���ܸ�Ʀ�������
     {
        return width*height;
     }  
};

int main(void)
{
   CWin win1('A',70,80);		// �إ�win1����
   CWin win2('B',60,90); 		// �إ�win2����	
 
   win1.compare(win2);  
        
   system("pause");
   return 0;
}
