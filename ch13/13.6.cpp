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
   
     friend CWin compare(CWin win7,CWin win8)   
     {
        if(area(win7) >= area(win8))
          return win7;	              // �Ǧ^�I�scompare()������
        else 
          return win8;		          // �Ǧ^compare()�ұ������޼�
     }
     friend CWin compare2(CWin win7,CWin win8)   
     {
        if(area(win7) <= area(win8))
          return win7;	              // �Ǧ^�I�scompare()������
        else 
          return win8;		          // �Ǧ^compare()�ұ������޼�
     }
     friend int area(CWin winXP)  
     {
        return winXP.width*winXP.height;
     }  
     friend char get_id(CWin win10) 		          // ������ơA�Ψ���ܸ�Ʀ���id����
     {
        return win10.id;
     }
};

int main(void)
{
   CWin win1('A',70,80);		      // �إ�win1����
   CWin win2('B',70,90); 		      // �إ�win2����	
//   CWin win3; 
   
   cout << "Window " << get_id(compare(win1,win2));
   cout << " is larger." << endl;
   cout << "Window " << get_id(compare2(win1,win2));
   cout << " is smaller." << endl;
   
   system("pause");
   return 0;
}
