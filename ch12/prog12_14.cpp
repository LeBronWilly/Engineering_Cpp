// prog12_14, �Q�Τ�����Ʀs���p������
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin    				             // �w�q�������OCWin
{
   private:
     char id;				             // �p����Ʀ���
     int width;   			             // �p����Ʀ���
     int height;  			             // �p����Ʀ���
   
   public:  
     int area(void)   			         // �����������area()
     {                 
         return width*height;
     }
     void show_area(void)    	         // �����������show_area()
     {
        cout<<"Window "<< id <<", area=" << area() << endl;
     }
     void set_data(char i,int w,int h)   // �����������set_data()
     {
        id=i;
        if(w>0 && h>0)
        {
           width=w;    
           height=h;
        }
        else
           cout << "input error" << endl;
     }
};

int main(void)
{
   CWin win1;   
      
   win1.set_data('A',50,40);
   win1.show_area();  	                 // ��ܭ��n 
   system("pause");
   return 0;
}
