// prog13_10, �ǻ�����}�C���Ƹ�
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin                                  // �w�q�������OCWin
{
   private:
     char id;
     int width, height;
     
   public:     
     void set_member(char i,int w,int h)
     {
        id=i;
        width=w;
        height=h;
     }
     int area(void) 
     {
        return width*height;
     }
     friend void largest(CWin *, int);  	// �ͽ˨�ƪ��쫬
};

void largest(CWin *win, int n)   		    // �w�q�ͽ˨��largest
{
   int max=0,indexmax;
   for(int i=0; i<n; i++){
      if(win[i].area()>max)			        // �P�O���n�O�_��max�٤j
      {
          indexmax=i;				
          max=win[i].area();
      }
    }
   cout << "largest window= " << win[indexmax].id << endl;    // �L�Xid����
}       

int main(void)
{
   CWin win[4];
   
   win[0].set_member('A',60,70);
   win[1].set_member('B',40,60);   
   win[2].set_member('C',80,50);   
   win[3].set_member('D',100,45);
   
   largest(win,sizeof(win)/sizeof(win[0]));                          // �I�slargest()���
      
   system("pause");
   return 0;
}
