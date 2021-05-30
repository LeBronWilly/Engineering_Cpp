// prog15_6, �]�w�B��l�h�����i������
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
class CWin    // �w�q�������OCWin
{
   private:
     char id, *title;
     
   public:     
     CWin(char i='D', char *text="Default window"):id(i)  
     {
        title=new char[50];
        strcpy(title,text);
     }
     void set_data(char i, char *text)
     {
        id=i;
        strcpy(title,text); 
     }   
     CWin &operator=(const CWin &win)     // �w�q�]�w�B��l�u=�v���h��
     {
        id=win.id;
        strcpy(this->title,win.title);    
        return *this;   
     }          
     void show(void)
     {
        cout<<"Window "<< id <<": "<< title <<endl;
     }

     ~CWin(){ delete [] title; } 
     
     CWin(const CWin &win)                // copy constructor
     {
        id=win.id;
        strcpy(title,win.title);         
     }     
};

int main(void)
{
   CWin win1('A',"Main window"); 
   CWin win2('B',"Big window"); 
   CWin win3;
   
   cout << "�]�w���e ..." << endl;
   win1.show(); 
   win2.show(); 
   win3.show(); 
   
   win1=win2=win3;                        // �]�wwin1=win2=win3
   cout << "�]�wwin1=win2=win3���� ..." << endl;
   win1.show(); 
   win2.show(); 
   win3.show(); 
   
   win1.set_data('A',"Hello window");     // �ק�win1�����e
   cout << "�]�w���win1���������� ..." << endl; 
   win1.show(); 
   win2.show();    
   win3.show();
   
   win3=win1;     // �ק�win3�����e
   cout << "�]�w���win3���������� ..." << endl; 
   win1.show(); 
   win2.show();    
   win3.show();
   
   system("pause");
   return 0;
}
