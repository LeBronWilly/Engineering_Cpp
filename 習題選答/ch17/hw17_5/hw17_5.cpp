// hw17_5,
#include <iostream>
#include <cstdlib>
using namespace std;
class CShape                    // �w�q��H���OCShape
{
   public:
      virtual int area()=0;     // �w�qarea()�A�åO����0�ӥN���O�x�������

      void show_area()          // �w�q��Ʀ���show_area()
      {
         cout << "area = " << area() << endl;
      }
};

class CWin : public CShape      // �w�q��CShape�ҭl�ͥX���l���OCWin
{
   protected:
     int width, height;

   public:
     CWin(int w=10, int h=10)   // CWin()�غc��
     {
        width=w;
        height=h;
     }
     virtual int area()
     {
        return width*height;
     }

     void show_area()
     {
        cout << "CWin���󪺭��n = " << area() << endl;
     }
};

class CCirWin : public CShape   // �w�q��CShape�ҭl�ͥX���l���OCCirWin
{
   protected:
     int radius;

   public:
     CCirWin(int r=10)          // CCirWin()�غc��
     {
        radius=r;
     }
     virtual int area()
     {
        return (int) (3.14*radius*radius);
     }
     void show_area()
     {
        cout << "CCirWin���󪺭��n = " << area() << endl;
     }
};

int main(void)
{
   CWin win1(50,60);		    // �إ�CWin���O������win1
   CCirWin win2(100);			// �إ�CCinWin���O������win2

   win1.show_area();			// ��win1�I�sshow_area();
   win2.show_area();	  		// ��win2�I�sshow_area();

   system("pause");
   return 0;
}

/* output-----------------
CWin���󪺭��n = 3000
CCirWin���󪺭��n = 31400
------------------------*/
