// prog14_6, �w�]�������غc��
#include <iostream>
#include <cstdlib> 
using namespace std;
class CWin                       // �w�q�������OCWin
{
   private:
     char id;
     int width, height;
     
   public:     
     CWin(char i,int w,int h):id(i),width(w),height(h)  
     {
        cout << "�غc���Q�I�s�F..." <<endl; 
     }
     void show_member(void)
     {
        cout << "Window " << id << ": ";
        cout << "width=" << width << ", height=" << height << endl;
     }
};

int main(void)
{
   CWin win1('A',50,40); 	     // �إ�win1����
   CWin win2(win1);    	         // �I�s�w�]�������غc�� 
   
   win1.show_member(); 
   win2.show_member();
        
   system("pause");
   return 0;
}
