// prog13_16, �ǻ����󪺰ѷӨ��Ƹ�
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin                          // �w�q�������OCWin
{
   private:
     char id;
     int width, height;
     
   public:     
     CWin(char i,int w,int h):id(i),width(w),height(h)  // �غc�� 
     {}
   
     void compare(CWin &win)	    // compare()�i�������󪺰ѷ�
     {
        if(this->area() > win.area())
          cout << "Window " << this->id << " is larger" << endl;
        else
          cout << "Window " << win.id << " is larger" << endl;
     }
     int area(void)  			    // �������area()
     {
        return width*height;	    // �Ǧ^���󪺭��n��
     }  
};

int main(void)
{
   CWin win1('A',70,80);		
   CWin win2('B',60,90); 		
   CWin win3('C',60,100);
     
   win1.compare(win2);	            // ��win1�I�scompare()�A�öǻ�win2
   win1.compare(win3);
        
   system("pause");
   return 0;
}
