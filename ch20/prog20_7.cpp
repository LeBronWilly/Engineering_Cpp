//prog20_7, �ɮפ��Ϊ��m�� - ���㪺�{���X 
#include <iostream>
#include <cstdlib>
using namespace std;

class CWin    			      // �w�q�������OCWin
{ 
   protected:
     char id;
     int width;   
     int height;
   public:
     CWin(char ch, int w, int h):id(ch),width(w),height(h){}
     void show(void);    	  // �������area()���쫬
};

void CWin::show(void) 	      // �w�qshow()���
{                 
   cout << "Window " << id << ":" << endl; 
   cout << "Area = " << width*height << endl;  
}
 
int main(void)   		      // �D�{��main()
{
   CWin win1('A',50,60); 
   win1.show();
   
   system("pause");
   return 0;
}
