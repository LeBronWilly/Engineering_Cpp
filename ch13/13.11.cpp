// prog13_14, �u�R�A������ơv���ϥ�
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin    				       // �w�q�������OCWin
{
   private:
     char id;
     int width, height;
     static int num;   		       // �R�A��Ʀ���
     
   public:     
     CWin(char i,int w,int h):id(i),width(w),height(h)  
     {
        num++;
     }
     CWin()
     {
        num++;     
     }
     static void count(void);       // �R�A������ƭ쫬 
//     {
//        cout << "�w�إ� " << num << " �Ӫ���F..." << endl;
//     }
	 static void show(CWin win){
	 	cout<<"\n"<< win.id<<win.width<<endl;
	 } 
};

void CWin::count(void){
	cout << "�w�إ� " << num << " �Ӫ���F..." << endl;
}

int CWin::num=0;     	           // �]�w�R�A��Ʀ��������  

int main(void)
{
   CWin::count();    	           // �����O�I�s�R�A�������

   CWin win1('A',50,40); 	
   CWin win2('B',60,80);
   CWin::count();                  // �����O�I�s�R�A�������
   win1.count();
   win2.count();

   CWin my_win[5];
   CWin::count();                  // �����O�I�s�R�A�������
   win1.count();
   my_win[2].count();
     
   system("pause");
   return 0;
}
