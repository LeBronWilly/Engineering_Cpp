// prog12_7, �N��Ʃw�q�����O���~ 
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin    			       // �w�q�������OCWin
{
   public:
     char id;
     int width;   
     int height;
     int area(void);    	   // �������area()���쫬
};

int CWin::area(void) 	       // �w�qarea()���
{                 
   return width*height;
}

int main(void)
{
   CWin win1;   			   // �ŧiCWin���O���A���ܼ�win1 
   
   win1.id='A';
   win1.width=50;	
   win1.height=40;

   cout << "Window " << win1.id << ":" << endl;
   cout << "Area = " << win1.area() << endl; 
   
   system("pause");
   return 0;
}
