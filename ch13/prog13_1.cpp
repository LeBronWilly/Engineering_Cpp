// prog13_1, �غc�����ϥ� 
#include <iostream>
#include <cstdlib> 
using namespace std;
class CWin                      // �w�q�������OCWin
{
   private:
     char id;
     int width, height;
     
   public:     
     CWin(char i,int w,int h)   // CWin()�غc��,�i�����T�Ӥ޼�
     {
        id=i;
        width=w;
        height=h;
        cout << "CWin �غc���Q�I�s�F..." << endl;
     }
     void show_member(void)  	// ������ơA�Ψ���ܸ�Ʀ�������
     {
        cout << "Window " << id << ": ";
        cout << "width=" << width << ", height=" << height << endl;
     }
};

int main(void)
{
   CWin win1('A',50,40); 		// �ŧiwin1����,�ó]�w���
   CWin win2('B',60,70); 		// �ŧiwin2����,�ó]�w���
      
   win1.show_member();  
   win2.show_member();
      
   system("pause");
   return 0;
}
