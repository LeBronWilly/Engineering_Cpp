// prog14_5, �ϥΰʺA�O����t�m
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

class CWin                               // �w�q�������OCWin
{
   private:
     char id, *title;   	             // �ŧititle�����V�r���}�C������

   public:     
     CWin(char i='D', char *text="Default window"):id(i)
     {
        title=new char[strlen(text)+1];  // �t�m�O����Ŷ�
        strcpy(title,text);
     }
     ~CWin()                             // �Ѻc�����쫬
     {
        cout << "�Ѻc���Q�I�s�F�AWin " << this->id << "�Q�P���F.." << endl;
        delete [] title;  	             // ����title�ҫ��V���O����Ŷ�
        system("pause");
     }
     void show(void)
     {
        cout << "Window " << id << ": " << title << endl;
     }
};

int main(void)
{
   CWin win1('A',"Main window"); 	
   CWin *ptr;
   ptr=new CWin('B'); 	 
   
   win1.show(); 
   ptr->show();

   system("pause");
   
   delete ptr;                           // ����ptr�ҫ��V���󤧰O����
   
   return 0;
}
