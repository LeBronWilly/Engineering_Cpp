// prog12_11, ��ƪ��h�� 
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin    		                    // �w�q�������OCWin
{
   public:
     char id;
     int width;   
     int height;
     
     int area() 		                // �w�q�������area(), �Ψӭp�⭱�n
     {                 
        return width*height;
     }
     void show_area(void)
     {
        cout << "Window " << id << ", area=" << area() << endl;
     }
     void set_data(char i,int w,int h)	// �Ĥ@��set_data()���
     {
        id=i;         
        width=w; 	
        height=h; 
     }
     void set_data(char i)  			// �ĤG��set_data()���
     {
        id=i;         
     } 
     void set_data(int w,int h)  		// �ĤT��set_data()���
     {
        width=w; 	
        height=h;         
     }          
};

int main(void)
{
   CWin win1,win2;   
   
   win1.set_data('A',50,40); 
   win2.set_data('B');
   win2.set_data(80,120);
   
   win1.show_area(); 
   win2.show_area();        
   
   system("pause");
   return 0;
}
