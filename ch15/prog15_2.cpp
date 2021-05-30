// prog15_2, �B��l�h�����d��(�G)
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin                                              // �w�q�������OCWin
{
   private:
     char id;
     int width, height;

   public:
     CWin(char i,int w,int h):id(i),width(w),height(h)  // �غc��
     {}
     
     int operator>(CWin &win)
     {
        return(this->area() > win.area());
     }
     
     int operator>(const int &var)
     {
        return(this->area() > var);
     }
     
     int area(void)
     {
        return width*height;
     }
};

int operator>(const int &var, CWin &win)
{
    return( var > win.area());
}

int main(void)
{
   CWin win1('A',70,80);
   CWin win2('B',60,70);

   if(win1>win2)                                        // �I�s�Ĥ@��operator>()���
      cout << "win1 is larger than win2" << endl;
   else
      cout << "win1 is smaller than win2" << endl;

   if(win1>7000)                                        // �I�s�ĤG��operator>()���
      cout << "win1 is larger than 7000" << endl;
   else
      cout << "win1 is smaller than 7000" << endl;

   if(4500>win2)                                        // �I�s�ĤT��operator>()���
      cout << "win2 is smaller than 4500" << endl;
   else
      cout << "win2 is larger than 4500" << endl;

   system("pause");
   return 0;
}
