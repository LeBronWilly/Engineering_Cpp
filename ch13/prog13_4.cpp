// prog13_4, �w�]���غc�� 
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin                      // �w�q�������OCWin
{
   private:
     char id;
     int width, height;
     
   public:     
     CWin(char i,int w,int h)   // CWin�غc��
     {
        id=i;
        width=w;
        height=h;
        cout << "CWin(char,int,int) �غc���Q�I�s�F..." << endl;
     }
     CWin(int w,int h)   		// CWin�غc��
     {
        id='Z';
        width=w;
        height=h;
        cout << "CWin(int,int) �غc���Q�I�s�F..." << endl; 
     }
     CWin()   				   // �S���޼ƪ�(�w�])�غc��
     {
        id='D';
        width=100;
        height=100;
        cout << "�w�]�غc���Q�I�s�F..." <<endl; 
     }                  
     void show_member(void)  	// ������ơA�Ψ���ܸ�Ʀ�������
     {
        cout << "Window " << id << ": ";
        cout << "width=" << width << ", height=" << height << endl;
     }
};

int main(void)
{
   CWin win1('A',50,40); 	
   CWin win2(80,120); 	
   CWin win3;                    // ����|�I�s�w�]�غc��
      
   win1.show_member();  
   win2.show_member();
   win3.show_member();
   
   system("pause");
   return 0;
}
