// prog12_8, �b���O�w�q�������I�s���
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin    		                // �w�q�������OCWin
{
   public:
     char id;
     int width;   
     int height;
     
     int area(void) 	            // �w�q�������area(), �Ψӭp�⭱�n
     {                 
        return width*height;
     }
     void show_area(void)           // �w�q�������show_area(), �Ψ���ܭ��n
     {
        cout << "Window " << id << ", area=" << this->area() << endl;
     }
};

int main(void)
{
   CWin win1,win2;   
   
   win1.id='A';
   win1.width=50;
   win1.height=40;
   win1.show_area();  	            // ��ܭ��n 
   
   win2.id='B';
   win2.width=30;
   win2.height=60;
   win2.show_area();  	            // ��ܭ��n 
   
   system("pause");
   return 0;
}
