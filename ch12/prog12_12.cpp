// prog12_12, �b���O�w�q�������I�s���
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin                // �w�q�������OCWin
{
   public:
     char id;
     int width;   
     int height;
     
     int area(void) 
     {                 
        return width*height;
     }
     void show_area(void)   
     {
        cout << "Window " << id;
        cout << ", area=" << area() << endl;
     }
};

int main(void)
{
   CWin win1;   
   
   win1.id='A';
   win1.width=-50;	      // ��N�Nwidth�����]��-50
   win1.height=40;
   win1.show_area();      // ��ܭ��n 
   
   system("pause");
   return 0;
}
