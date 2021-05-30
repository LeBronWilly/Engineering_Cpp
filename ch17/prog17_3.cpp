// prog17_3, ²�檺����-���V�����O���󪺫���
#include <iostream>
#include <cstdlib>
using namespace std;

class CWin                      // �w�qCWin���O�A�b���������O
{
   protected:
     char id;
     int width, height;
   public:
     CWin(char i='D',int w=10, int h=10)           // �����O���غc��
     {
        id=i;
        width=w;
        height=h;   
     }
      void show_area()          // �����O��show_area()���
      {
         cout << "Window " << id << ", area = " << area() << " from �����Oshow_area()" << endl;
      }
      virtual int area()        // �����O��area()���
      {
         return width*height;
      }
};

class CMiniWin : public CWin    // �w�q�l���OCMiniWin
{
   public:     
     CMiniWin(char i,int w,int h):CWin(i,w,h){}    // �l���O���غc��
     
     virtual int area()    	   // �l���O��area()���
     {
        return (int)(0.8*width*height); 
     }
};

int main(void)
{
   CWin win('A',70,80);
   CMiniWin m_win('B',50,60);	// �إߤl���O������
  
//   CWin *ptr=NULL;   			// �ŧi���V�����O(�����O)������
//   ptr=&win;					// �Nptr���V�����O������win
   CWin *ptr=&win;   			// �ŧi���V�����O(�����O)������
   ptr->show_area();			// �Hptr�I�sshow_area()���
   
   ptr=&m_win;				// �Nptr���V�l���O������m_win
   ptr->show_area();	  		// �Hptr�I�sshow_area()���

   system("pause");
   return 0;
}
