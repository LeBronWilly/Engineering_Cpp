// prog14_7, ���g�ۤv�������غc��
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin                      // �w�q�������OCWin
{
   private:
     char id;
     int width, height;
     
   public:     
     CWin(char i,int w,int h):id(i),width(w),height(h)  
     {
        cout << "�غc���Q�I�s�F..." << endl; 
     }
     CWin(const CWin &win)      // �w�q�����غc��
     {
        cout << "�����غc���Q�I�s�F..." << endl; 
        id=win.id;
        width=win.width;   
        height=win.height; 
     }             
     void show_member(void)
     {
        cout << "Window " << id << ": ";
        cout << "width=" << width << ", height=" << height << endl;
     }
};

int main(void)
{
   CWin win1('A',50,40); 	
   CWin win2(win1);             // �I�s�����غc�� 
//   CWin win2=win1;
   
   win1.show_member(); 
   win2.show_member();
        
   system("pause");
   return 0;
}
