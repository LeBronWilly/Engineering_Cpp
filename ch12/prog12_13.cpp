// prog12_13, �p���������ϥνd��
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin    		            // �w�q�������OCWin
{
     char id;
     int width;   
     int height;
     
   public:     
     int area(void) 	        // �������area()
     {                 
        return width*height;
     }
     void show_area(void)       // �������show_area()
     {
        cout << "Window "<< id <<", area=" << area() << endl;
     }
     void set(char a,int b,int c){
     	id=a;
     	width=b;
     	height=c;
	 }
};

int main(void)
{
   CWin win1;   
   
//   win1.id='A'; // Error
//   win1.width=-5; // Error
//   win1.height=12; // Error

   win1.set('A',-5,12); // It works!
   
   win1.show_area();
   system("pause");
   return 0;
}
