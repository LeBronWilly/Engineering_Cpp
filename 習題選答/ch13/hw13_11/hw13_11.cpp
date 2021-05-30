// hw13_11,
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin
{
   private:
      char id;
      int width,height;
      static int num;

   public:
      CWin(char i,int w,int h):id(i),width(w),height(h)
      {
         num++;
      }
      CWin()
      {
         num++;
      }
      static void count(void);
};

void CWin::count(void)
{
   cout << "�w�إ�" << num << " �Ӫ���F..." << endl;
}

int CWin::num=0;

int main(void)
{
   CWin::count();

   CWin win1('A',50,40);
   CWin win2('B',60,80);
   CWin::count();

   CWin my_win[5];
   CWin::count();

   system("pause");
   return 0;
}

/* output-------------------------------
�w�إ�0 �Ӫ���F...
�w�إ�2 �Ӫ���F...
�w�إ�7 �Ӫ���F...
--------------------------------------*/
