// prog12_9, �ǻ��޼ƨ��Ƹ� 
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin    		                         // �w�q�������OCWin
{
   public:
     char id;
     int width;   
     int height;
     
     int area() 		                     // �w�q�������area(), �Ψӭp�⭱�n
     {                 
        return width*height;
     }
     void show_area(void)
     {
        cout << "Window " << id << ", area=" << area() << endl;
     }
     void set_data(char i,int w,int h)       // set_data() ���
     {
        id=i;        	                     // �]�wid���� 
        width=w; 		                     // �]�wwidth����
        height=h; 	                         // �]�wheight����
     }
};

int main(void)
{
   CWin win1;   
   
   win1.set_data('B',50,40); 
   win1.show_area();     
   
   system("pause");
   return 0;
}
