// prog13_6, �ϥΪ�l�Ʀ�C�ӳ]�w��� 
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin                           // �w�q�������OCWin
{
   private:
     char id;
     int width, height;
     
   public:     
     CWin(char i='D',int w=100,int h=100):id(i),width(w),height(h) 
     {
        cout << "�����w�Q��l�ƤF" << endl; 
     }
     void show_member(void)          // ������ơA�Ψ���ܸ�Ʀ�������
     {
        cout << "Window " << id << ": ";
        cout << "width=" << width << ", height=" << height << endl;
     }
};

int main(void)
{
   CWin win1('A',23);		         // �إ�win1����
   CWin win2; 			             // �إ�win2����
 
   win1.show_member();  
   win2.show_member();  
        
   system("pause");
   return 0;
}
