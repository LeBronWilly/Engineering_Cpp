// prog13_3, �غc�����h�� 
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin                      // �w�q�������OCWin
{
   private:
     char id;
     int width, height;
     
   public:     
     CWin(char ,int ,int );	// ���T�Ӥ޼ƪ��غc��
     CWin(int ,int );   		// �u����Ӥ޼ƪ��غc��      
     void show_member(void)  	// ������ơA�Ψ���ܸ�Ʀ�������
     {
        cout<< "Window " << id << ": ";
        cout<< "width=" << width << ", height=" << height << endl;
     }
};

CWin::CWin(char i,int w,int h)	// ���T�Ӥ޼ƪ��غc��
     {
        id=i;
        width=w;
        height=h;
        cout << "CWin(char,int,int) �غc���Q�I�s�F..." << endl;
     }
CWin::CWin(int w,int h)   		// �u����Ӥ޼ƪ��غc��
     {
        id='Z';
        width=w;
        height=h;
        cout << "CWin(int,int) �غc���Q�I�s�F..." << endl;        
     }



int main(void)
{
   CWin win1('A',50,40); 		// �إ�win1����A�éI�s�T�Ӥ޼ƪ��غc��
   CWin win2(80,120); 		    // �إ�win2����A�éI�s�G�Ӥ޼ƪ��غc��
      
   win1.show_member();  
   win2.show_member();
     
   system("pause");
   return 0;
}
