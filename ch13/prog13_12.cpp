// prog13_12, public�u�R�A��Ʀ����v���ϥ� 
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin    			    // �w�q�������OCWin
{
   private:
     char id;
     int width, height;
    
   public:  
     static int num;   	    // �N�R�A��Ʀ���num�ŧi��public
     CWin(char i,int w,int h):id(i),width(w),height(h)
     {
        num++;    			// �N�R�A��Ʀ������ȥ[1
     }
     CWin()
     {
        num++;    			// �N�R�A��Ʀ������ȥ[1
     }
};

int CWin::num=0;    		// �]�w�R�A��Ʀ���num�����

int main(void)
{
   CWin win1('A',50,40); 	
   CWin win2('B',60,80);
   cout << "�w�إ� " << CWin::num << " �Ӫ���F..." << endl;
   cout << "�w�إ� " << win1.num << " �Ӫ���F..." << endl;


   CWin my_win[4];
   cout << "�w�إ� " << CWin::num << " �Ӫ���F..." << endl;  
   cout << "�w�إ� " << my_win[0].num << " �Ӫ���F..." << endl;
   cout << "�w�إ� " << my_win[3].num << " �Ӫ���F..." << endl;
   
   system("pause");
   return 0;
}
