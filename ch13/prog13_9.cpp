// prog13_9, �إߪ���}�C 
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin                      // �w�q�������OCWin
{
   private:
     char id;
     int width, height;
     
   public:     
     CWin(char i='D',int w=100,int h=100):id(i),width(w),height(h)  
     {
        cout << "�غc���Q�I�s�F..." << endl; 
     }
     void show_member(void)  	// ������ơA�Ψ���ܸ�Ʀ�������
     {
        cout << "Window " << id << ": ";
        cout<< "width=" << width << ", height=" << height << endl;
     }
};

int main(void)
{
   CWin win1('A',50,40); 	
   CWin my_win[3];   			// �إ�3��CWin���A������
 
   win1.show_member();  	   	// �Hwin1����I�sshow_member()
   my_win[0].show_member();
   my_win[1].show_member();
   my_win[2].show_member(); 	// �Hmy_win[2]����I�sshow_member()
        
   system("pause");
   return 0;
}
