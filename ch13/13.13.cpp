// prog13_16, �ǻ����󪺰ѷӨ��Ƹ�
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin                          // �w�q�������OCWin
{
   private:
     int width, height;
     
   public:     
     char id;
	 CWin(char i,int w,int h):id(i),width(w),height(h)  // �غc�� 
     {}
   
     CWin &compare(CWin &win)	    // compare()�i�������󪺰ѷ�
     {
        if(this->area() > win.area())
            return *this;
         else
            return win;
     }
     
     CWin compare2(CWin &win)	    // compare()�i�������󪺰ѷ�
     {
        if(this->area() < win.area())
            return *this;
         else
            return win;
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
   CWin win3('+',878787,787878);
   win3=win1.compare(win2);
   cout << "Window " << win3.id << " is larger" << endl;
   win3=win2.compare2(win1);
   cout << "Window " << win3.id << " is smaller" << endl;
   
//   win1.compare(win2);	            // ��win1�I�scompare()�A�öǻ�win2
//   win1.compare(win3);
        
   system("pause");
   return 0;
}
