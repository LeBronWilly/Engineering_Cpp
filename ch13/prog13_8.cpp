// prog13_8, �Ѩ�ƶǦ^���O���A���ܼ�
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin                            // �w�q�������OCWin
{
   private:
     char id;
     int width, height;
     
   public:     
     CWin(char i='C',int w=100,int h=55):id(i),width(w),height(h)   // �غc�� 
     {}
   
     CWin compare(CWin win)   
     {
        if(this->area() >= win.area())
          return *this;	              // �Ǧ^�I�scompare()������
        else 
          return win;		          // �Ǧ^compare()�ұ������޼�
     }
     CWin compare2(CWin win)   
     {
        if(this->area() <= win.area())
          return *this;	              // �Ǧ^�I�scompare()������
        else 
          return win;		          // �Ǧ^compare()�ұ������޼�
     }
     int area(void)  
     {
        return width*height;
     }  
     char get_id(void) 		          // ������ơA�Ψ���ܸ�Ʀ���id����
     {
        return id;
     }
};

int main(void)
{
   CWin win1('A',70,80);		      // �إ�win1����
   CWin win2('B',60,90); 		      // �إ�win2����	
   CWin win3; 
   
   cout << "Window " << (win1.compare(win2)).get_id();
   cout << " is larger." << endl;
   cout << "Window " << (win1.compare2(win3)).get_id();
   cout << " is smaller." << endl;
   
   system("pause");
   return 0;
}
