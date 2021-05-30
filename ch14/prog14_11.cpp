// prog14_11, �[�J�����غc���ӭץ����~
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
class CWin                                       // �w�q�������OCWin
{
   private:
     char id, *title;
     
   public:     
     CWin(char i='D', char *text="Defaule window"):id(i)  
     {
        cout << "�غc���Q�I�s�F..." << endl; 
        title=new char[strlen(text)+1];          // �t�m�O�ЪŶ�
        strcpy(title,text);
     }
     CWin(const CWin &win)  
     {
        cout << "�����غc���Q�I�s�F..." << endl;         
        id=win.id;
        title=new char[strlen(win.title)+1];     // �t�m�O�ЪŶ�
        strcpy(title,win.title);
     }     
     ~CWin()                                     // �Ѻc�����쫬 
     {
        delete [] title;
     }      
     void show()
     {
        cout << "Window " << id << ": " << title << endl;
     }
};

void display(CWin win)
{
   win.show();
}

int main(void)
{
   CWin *ptr1=new CWin('A',"Main window"); 	

   display(*ptr1); 
   display(*ptr1); 
   
   delete ptr1;
  
   system("pause");
   return 0;
}
