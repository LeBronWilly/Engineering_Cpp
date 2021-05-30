// prog12_16, �ͽ˨�ƪ��ϥ�
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin                              // �w�q�������OCWin
{
   public:
     void set_data(char i,int w, int h) // �]�w�ƭȪ���� 
     {
        id=i;
        width=w;
        height=h;
     }
   private:
     char id;
     int width;   
     int height;  
     

   friend void show_member(CWin);   	// �ͽ˨�ƪ��쫬
   friend void show_member2(){
    	cout << "Window " << this->id;
    	cout << ": width = " << this->width;
    	cout << ", height = " << this->height << endl;
	};   	// �ͽ˨�ƪ��쫬
};

void show_member(CWin w)  			    // �w�q�ͽ˨��
{
    cout << "Window " << w.id;
    cout << ": width = " << w.width;
    cout << ", height = " << w.height << endl;
}



int main(void)
{
   CWin win1,win2;  
   
   win1.set_data('A',50,40);  			// �I�sset_data()�ӳ]�� 
   win2.set_data('B',80,60);
   show_member(win1);
   show_member(win2);
   win1.show_member();
  
   system("pause");
   return 0;
}
