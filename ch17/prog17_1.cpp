// prog17_1, ���~���d�ҡA���ϥε������
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin                      // �w�qCWin���O�A�b���������O
{
   protected:
     char id;
     int width, height;
   public:
     CWin(char i='D',int w=10, int h=10)   // �����O���غc��
     {
        id=i;
        width=w;
        height=h;   
     }
      void show_area()	        // �����O��show_area()���
      {
         cout << "Window " << id << ", area = " << area() << endl;
      }
      int area()    		    // �����O��area()���
      {
         return width*height;
      }
};

class CMiniWin : public CWin  	// �w�q�l���OCMiniWin
{
   public:     
     CMiniWin(char i,int w,int h):CWin(i,w,h){}  // �l���O���غc��
     
     int area()    				// �l���O��area()���
     {
        return (int)(0.8*width*height);  
     }
};

int main(void)
{
   CWin win('A',70,80);			// �إߤ����O����win
   CMiniWin m_win('B',50,60);	// �إߤl���O����m_win
  
   win.show_area();		        // �H�����O����win�I�sshow_area()���
   m_win.show_area();	  	    // �H�l���O����m_win�I�sshow_area()���

   system("pause");
   return 0;
}
