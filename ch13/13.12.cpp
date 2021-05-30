// prog13_15, �ǻ�������Ƹ�
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin                          // �w�q�������OCWin
{
   private:
     char id;
     int width, height;
     
   public:     
     CWin(char i,int w,int h):id(i),width(w),height(h) // �غc�� 
     {}
   
     void compare(CWin *win)        // �H���V���󪺫��Ь��޼�
     {
        if(this->area() > win->area())
          cout << "Window " << this << " is larger" << endl;
        else
          cout << "Window " << win << " is larger" << endl;
     }
     
	 friend void compare2(CWin *winwin,CWin *winwinwin)        // �H���V���󪺫��Ь��޼�
     {
        if(winwin->area() > winwinwin->area())
          cout << "Window " << winwin << " is larger" << endl;
        else
          cout << "Window " << winwinwin << " is larger" << endl;
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
   CWin *ptr1=&win1;                // �ŧiptr1���СA�ñN�����V����win1
   CWin *ptr2=&win2;                // �ŧiptr2���СA�ñN�����V����win2
     
   ptr1->compare(ptr2);             // ��ptr1�I�scompare()�A�öǻ�ptr2
   ptr2->compare(ptr1);             
   cout<<endl;
   compare2(ptr1,ptr2);
   compare2(ptr2,ptr1);

        
   system("pause");
   return 0;
}
