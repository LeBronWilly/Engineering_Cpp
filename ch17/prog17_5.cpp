// prog17_5, �ץ�prog17_4�����~
#include <iostream>
#include <cstdlib>
using namespace std;

class CWin                                       // �w�qCWin���O�A�b���������O
{
   protected:
     char id;
     int width, height;
   public:
     CWin(char i='D',int w=10, int h=10)         // �����O���غc��
     {
        id=i;
        width=w;
        height=h;   
     }
      void show_area()                           // �����O��show_area()���
      {
         cout << "Window " << id << ", area = " << area() << endl;
      }
      virtual int area()                         // �����O��area()���
      {
         return width*height;
      }
};

class CMiniWin : public CWin                     // �w�q�l���OCMiniWin
{
   public:     
     CMiniWin(char i,int w,int h):CWin(i,w,h){}  // �l���O���غc��
     
     virtual int area()    	                     // �l���O��area()���
     {
        return (int)(0.8*width*height); 
     }
};

int main(void)
{
   CWin *ptr=new CWin('A',70,80);	// �]�wptr���VCWin���O������
   CMiniWin m_win('B',50,60);
  
   ptr->show_area();				// �Hptr�I�sshow_area()���
   delete ptr;        				// ������ptr�ҫ��V���O�ЪŶ�
   
   ptr=&m_win;					// �A�Nptr���V�l���O������m_win
   ptr->show_area();	  			// �Hptr�I�sshow_area()���
   
   
   system("pause");
   return 0;
}
