// prog12_10, �ǻ�������Ƹ� 
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin    		           // �w�q�������OCWin
{
   public:
     char id;
     int width;   
     int height;
     
     int area() 		       // �w�q�������area(), �Ψӭp�⭱�n
     {                 
        return width*height;
     }

     void set_data(char i,int w,int h)      // set_data() ���
     {
        id=i;        	       // �]�wid���� 
        width=w; 		       // �]�wwidth����
        height=h; 	           // �]�wheight����
     }
};

void show_area(CWin winwinwin)   	   // ��show_area()�w�q���@�몺���
{
   cout << "Window " << winwinwin.id <<", area=" << winwinwin.area() << endl;
}

int main(void)
{
   CWin win1;   
   
   win1.set_data('B',50,40);   // ��win1����I�sset_data()���
   show_area(win1);     	   // �ǻ�win1�����show_area()��Ƹ�
   
   system("pause");
   return 0;
}
