// prog12_1, �Q�ε��c�Ӫ�ܵ���
#include <iostream>
#include <cstdlib>
using namespace std;
struct Win  		                   // �Q�ε��c�өw�q����(Window)
{
   char id;
   int width;  	                       // Win���c��width����
   int height;	                       // Win���c��height����
};

int area(struct Win w)     		       // ���n���
{
   return w.width*w.height;    	       // ���n=�e*��
}

int main(int)
{
   Win win1;			               // �ŧiWin���c������win1
   
   win1.id='A';
   win1.width=50; 	                   // �]�w�e��50
   win1.height=40;	                   // �]�w����40

   cout << "Window " << win1.id << ", area=" << area(win1) << endl;
   system("pause");
   return 0;
}
