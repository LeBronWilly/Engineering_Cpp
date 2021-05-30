// hw17_3,
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
      void show_area()          // �����O��show_area()���
      {
         cout << "Window " << id << ", area = " << area() << endl;
      }
      virtual int area()        // �����O��area()���
      {
         return width*height;
      }
};

class CMiniWin : public CWin    // �w�q�l���OCMiniWin
{
   public:
     CMiniWin(char i,int w,int h):CWin(i,w,h){}  // �l���O���غc��

     virtual int area()         // �l���O��area()���
     {
        return (int)(0.8*width*height);
     }
};

int main(void)
{
   CWin win('A',70,80);		    // �إߤl���O������
   CMiniWin m_win('B',50,60);

   CWin *ptr=NULL;       		// �ŧi���V�����O(�����O)������

   ptr=&win;				// �Nptr���V�����O������win
   cout << "Win A: " << ptr->area() << endl;

   ptr=&m_win;			// �Nptr���V�l���O������m_win
   cout << "Win M: " << ptr->area() << endl;;

   system("pause");
   return 0;
}

/* output--------------
Win A: 5600
Win M: 2400
---------------------*/
