// prog12_3, �إߪ���P��Ʀ������s��
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin    		// �w�q�������OCWin
{
   public:   		// �]�w��Ʀ���������
     char id;
     int width;   
     int height;
};
class CWin2    		// �w�q�������OCWin
{
   public:   		// �]�w��Ʀ���������
     char id;
     double width;   
     int height;
};
int main(void)
{
   CWin win1;
   CWin2 win2;   
   
   win1.id='A';
   win1.width=50;		
   win1.height=40;
   
   win2.id='B';
   win2.width=win1.width+20; 	
   win2.height=win1.height+10;	
   
   cout << "Window " << win1.id << ":" << endl;
   cout << "win1.width = " << win1.width << endl;
   cout << "win1.height = " << win1.height << endl<< endl;
   
   cout << "Window " << win2.id << ":" << endl;
   cout << "win2.width = " << win2.width << endl;
   cout << "win2.height = " << win2.height << endl<< endl;   
   
   cout << "sizeof(win1) = " << sizeof(win1) << " bytes" << endl;
   cout << "sizeof(win2) = " << sizeof(win2) << " bytes" << endl;
   
   system("pause");
   return 0;
}
