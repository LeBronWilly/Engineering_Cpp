// prog12_6, �����O�̩w�q�h�Ө�� 
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin    		             // �w�q�������OCWin
{
   public:
     char id;
     int width;   
     int height;
     
     int area() 		         // �w�q�������area(), �Ψӭp�⭱�n
     {                 
         return width*height;
     }
     int perimeter()             // �w�q�������perimeter(), �Ψӭp��P��
     {
         return 2*(width + height);
     }
};

int main(void)
{
   CWin win1;   		         // �ŧiCWin���O���A���ܼ�win1 
   
   win1.id='A';
   win1.width=50;	             // �]�wwin1��width������50
   win1.height=40;	             // �]�wwin1��height������40
   
   cout << "Window " << win1.id << ":" << endl;
   cout << "Area = " << win1.area() << endl;  		        // �p�⭱�n
   cout << "Perimeter = " << win1.perimeter() << endl;      // �p��P�� 
   cout << "sizeof(win1) = " << sizeof(win1) << " bytes" << endl;
   
   system("pause");
   return 0;
}
