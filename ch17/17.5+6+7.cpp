// prog17_6, ��H���O����@
#include <iostream>
#include <cstdlib>
using namespace std;
class CShape                    // �w�q��H���OCShape
{
   public:
      virtual int area()=0;     // �w�qarea()�A�åO����0�ӥN���O�x�������
   
      void show_area()     	    // �w�q�������show_area()
      {
         cout << "area = " << area() << " from CShape" << endl;
      }   
};

class CWin : public CShape  	// �w�q��CShape�ҭl�ͥX���l���OCWin
{
   protected:
     int width, height;
     
   public:
     CWin(int w=10, int h=10)	// CWin()�غc��
     {
        width=w;
        height=h;   
     }
     virtual int area()   
     {
        return width*height;
     }
     void show_area()     	    // �w�q�������show_area()
     {
	  	cout << "area = " << area() << " from CWin" << endl;
     }
};

class CCirWin : public CShape	// �w�q��CShape�ҭl�ͥX���l���OCCirWin
{
   protected:
     int radius;
     
   public:
     CCirWin(int r=10)   		// CCirWin()�غc��
     {
        radius=r;
     }
     virtual int area()
     {
        return (int) (3.14*radius*radius);
     }
     void show_area()     	    // �w�q�������show_area()
     {
	  	cout << "area = " << area() << " from CCirWin" << endl;
     }   
};

int main(void)
{
//   CShape shp;  // ����Ω�H���O�إߪ��� 
   CWin win1(50,60);		    // �إ�CWin���O������win1
   CCirWin win2(100);			// �إ�CCinWin���O������win2
  
   win1.show_area();			// ��win1�I�sshow_area();
   win2.show_area();	  		// ��win2�I�sshow_area();

   system("pause");
   return 0;
}
