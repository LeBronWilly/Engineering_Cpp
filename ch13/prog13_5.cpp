// prog13_5,�غc���޼ƪ��w�]�� 
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin                                  // �w�q�������OCWin
{
   private:
     char id;
     int width, height;
     
   public:     
     CWin(char i='D',int w=100,int h=100)   // �޼ƪ��w�]��
     {
        id=i;
        width=w;
        height=h;
     }
     void show_member(void)  	            // ������ơA�Ψ���ܸ�Ʀ�������
     {
        cout << "Window " << id << ": ";
        cout << "width=" << width << ", height=" << height << endl;
     }
};

int main(void)
{
   CWin win1('A',50,40); 		            // �ۦ�]�w�Ҧ�����Ʀ���
   CWin win2('B',80);			            // �u��height�����ϥιw�]��
   CWin win3; 				                // �Ҧ����ȳ��ϥιw�]��	
 
   win1.show_member();
   win2.show_member();
   win3.show_member();
        
   system("pause");
   return 0;
}
