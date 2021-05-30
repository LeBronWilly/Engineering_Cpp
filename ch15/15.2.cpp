// prog15_1, �B��l�u>�v�h�����d��
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin    // �w�q�������OCWin
{
   private:
     char id;
     int width, height;
     
   public:     
     CWin(char i,int w,int h):id(i),width(w),height(h) // �غc�� 
     {}
   

     int area(void)  
     {
        return width*height;
     }  
};

int operator>(CWin &winX, CWin &winXX)   // �w�q�B��l�u>�v���h��
{
	return(winX.area() > winXX.area());
}

int main(void)
{
   CWin win1('A',60,80);		
   CWin win2('B',60,90);
   
   if(operator>(win1,win2))    // �P�Owin1�Pwin2���󤧭��n���j�p
      cout << "win1 is larger than win2" << endl;
   else
      cout << "win2 is larger than win1" << endl;
              
   if(win1>win2)    // �P�Owin1�Pwin2���󤧭��n���j�p
      cout << "win1 is larger than win2" << endl;
   else
      cout << "win2 is larger than win1" << endl;
       
   system("pause");
   return 0;
}
