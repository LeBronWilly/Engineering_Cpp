// prog13_13, private�u�R�A��Ʀ����v���ϥ� 
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin                         // �w�q�������OCWin
{
   private:
     char id;
     int width, height;
     static int num;    	       // �N�R�A��Ʀ����ŧi��private
     
   public:     
     CWin(char i,int w,int h):id(i),width(w),height(h)  
     {
        num++;    			       // �N�R�A��Ʀ������ȥ[1
     }
     CWin()
     {
        num++;    			       // �N�R�A��Ʀ������ȥ[1
     }
     void count(void)   	       // ������ơA�iŪ��private�R�A��Ʀ���
     {
        cout << "�w�إ� " << num << " �Ӫ���F..." << endl;
     }
};

int CWin::num=0;   		           // �]�w�R�A��Ʀ���num�����

int main(void)
{
   CWin win1('A',50,40); 	
   CWin win2('B',60,80);
   win1.count();     		       // �Hwin1����I�scount

   CWin my_win[4];
   win2.count();     		       // �]�i��win2����I�scount
     
   system("pause");
   return 0;
}
