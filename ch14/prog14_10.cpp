// prog14_10, ���~�ܽd�A�����g�����غc�������~
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
class CWin                                    // �w�q�������OCWin
{
   private:
     char id, *title;
     
   public: 
     CWin(char i='D', char *text="Defaule window"):id(i)  
     {
        cout << "�غc���Q�I�s�F..." << endl;         
        title=new char[strlen(text)+1];       // �t�m�O�ЪŶ�
        strcpy(title,text);
     }
     ~CWin()                                  // �Ѻc�����쫬 
     {
        delete [] title;
     }      
     void show()
     {
        cout << "Window " << id << ": " << title << endl;
     }
};

void display(CWin win)                        // �ΨөI�sCWin���O�̪�show()���
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
