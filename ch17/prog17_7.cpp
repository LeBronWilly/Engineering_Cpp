// prog17_7, ��H���O��h�h�~�Ӫ�����
#include <iostream>
#include <cstdlib>
using namespace std;
class CShape                        // �w�q��H���OCShape
{
   public:
      virtual int area()=0;  	    // �w�qarea()���x�������
   
      void show_area()     	        // �w�q�������show_area()
      {
         cout << "area = " << area() << "  from CShape" << endl;
      }   
};

class CWin : public CShape  	    // �w�q��CShape�ҭl�ͥX���l���OCWin
{
   protected:
     int width, height;
     
   public:
     CWin(int w=10, int h=10)	    // CWin()�غc��
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
        cout << "CWin���󪺭��n = " << area() << "  from CWin" << endl;
     }        
};

class CCirWin : public CShape       // �w�q��CShape�ҭl�ͥX���l���OCCirWin
{
   protected:
     int radius;
     
   public:
     CCirWin(int r=10)   		   // CCirWin()�غc��
     {
        radius=r;
     }
     virtual int area()
     {
        return (int)(3.14*radius*radius);
     }
     void show_area()       
     {
        cout << "CCirWin���󪺭��n = " << area() << "  from CCirWin" << endl;
     }   
};

class CMiniWin : public CWin        // �w�q��CWin�ҭl�ͥX���l���OCMiniWin
{
   public:     
     CMiniWin(int w,int h):CWin(w,h){}         // �l���O���غc��
     
     virtual int area()
     {
        return (int) (0.5*width*height);
     }
     void show_area()       
     {
        cout << "CMiniWin���󪺭��n = " << area()<< "  from CMiniWin" << endl;
     }       
};

int main(void)
{
   CWin win1(50,60);
   CCirWin win2(100);
   CMiniWin win3(50,60);
  
   win1.show_area();
   win2.show_area();
   win3.show_area();

   system("pause");
   return 0;
}
