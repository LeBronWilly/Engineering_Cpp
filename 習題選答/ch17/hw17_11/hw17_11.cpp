// hw17_11,
#include <iostream>
#include <cstdlib>
using namespace std;
class CShape                    // �w�q��H���OCShape
{
   public:
      virtual int area()=0;     // �w�qarea()���x�������

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

class CTriWin : public CShape   // �w�q��CShape�ҭl�ͥX���l���OCCirWin
{
   protected:
     int base,height;

   public:
     CTriWin(int b=10, int h=10)   // CTriWin()�غc��
     {
        base=b;
        height=h;
     }
     virtual int area()
     {
        return (int) (base*height/2);
     }
     void show_area()
     {
        cout << "CTriWin���󪺭��n = " << area() << endl;
     }
};

class CMiniWin : public CWin    // �w�q��CWin�ҭl�ͥX���l���OCMiniWin
{
   public:
     CMiniWin(int w,int h):CWin(w,h){}  // �l���O���غc��

     virtual int area()
     {
        return (int) (0.5*width*height);
     }
     void show_area()
     {
        cout << "CMiniWin���󪺭��n = " << area() << endl;
     }
};

int main(void)
{
   CWin win1(50,60);		    // �إߤl���O������
   CCirWin win2(100);
   CMiniWin win3(50,60);
   CTriWin win4(100,80);

   win1.show_area();
   win2.show_area();
   win3.show_area();
   win4.show_area();

   system("pause");
   return 0;
}

/* output-----------------
CWin���󪺭��n = 3000
CCirWin���󪺭��n = 31400
CMiniWin���󪺭��n = 1500
CTriWin���󪺭��n = 4000
------------------------*/
