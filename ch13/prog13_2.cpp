// prog13_2, �N�غc�����w�q�������O�~�� 
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin                          // �w�q�������OCWin
{
   private:
     char id;
     int width, height;
     
   public:     
     CWin(char,int,int);   	        // CWin�غc�����쫬

     void show_member(void)  	    // ������ơA�Ψ���ܸ�Ʀ�������
     {
        cout<< "Window " << id << ": ";
        cout<< "width=" << width << ", height=" << height << endl;
     }
};

CWin::CWin(char i,int w,int h)   	// CWin�غc�����w�q
{
   id=i;
   width=w;
   height=h;
   cout << "CWin �غc���Q�I�s�F..." <<endl;
}

int main(void)
{
   CWin win1('C',23,55); 			// �ŧiwin1����ó]�w���
   CWin win2('D',22,6); 			// �ŧiwin2����ó]�w���
      
   win1.show_member();  
   win2.show_member();
     
   system("pause");
   return 0;
}
