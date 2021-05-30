// prog15_4, �ϥιw�]���]�w�B��l�ҵo�ͪ����~
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin                            // �w�q�������OCWin
{
   private:
     char id, *title;
     
   public:     
     CWin(char i='D', char *text="Default window"):id(i)  
     {
        title=new char[50];           // �t�m�i�e��50�Ӧr�����O�ЪŶ�
        strcpy(title,text);           // �Ntext�ҫ��V���r�������title
     }
     void set_data(char i, char *text)
     {
        id=i;    
        strcpy(title,text);           // �Ntext�ҫ��V���r�������title
     }    
     void show(void)
     {
        cout << "Window " << id << ": " << title << endl;
     }
     
     ~CWin(){ delete [] title; }      // �Ѻc��
     
     CWin(const CWin &win)  		  // �����غc��
     {
        id=win.id;
        strcpy(title,win.title); 
     }     
};

int main(void)
{
   CWin win1('A',"Main window"); 	
   CWin win2; 	 
   
   win1.show(); 
   win2.show();
   
   win1=win2;                         // �]�wwin1=win2
   cout << endl << "�]�w win1=win2 ����..." << endl;
   win1.show();
   win2.show();

   win1.set_data('B',"Hello window");
   cout << endl << "��� win1����Ʀ�������..." << endl; 
   win1.show(); 
   win2.show();    
   
   system("pause");
   return 0;
}
