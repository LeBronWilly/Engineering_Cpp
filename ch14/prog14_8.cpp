// prog14_8, ���~�ܽd�A�����g�����غc���Өϥιw�]������
#include <iostream >
#include <cstdlib>
using namespace std;
class CWin                                   // �w�q�������OCWin
{
   private:
     char id, *title;
     
   public:     
     CWin(char i='D', char *text="Default window"):id(i)  
     {        
        cout << "�غc���Q�I�s�F..." << endl; 
        title=new char[strlen(text)+1];      // �t�m�O�ЪŶ�
        strcpy(title,text);
     }
     CWin(const CWin &win)
     {
        cout<< "�����غc���Q�I�s�F..." <<endl; 
        id=win.id;
        title=win.title;  
     }             
     ~CWin()                                 // �Ѻc�����쫬 
     {
        delete [] title;
     }      
     void show(void)
     {
        cout << "Window " << id << ": " << title << endl;
     }
};

int main(void)
{
   CWin *ptr1=new CWin('A',"Main window"); 	
   CWin *ptr2=new CWin(*ptr1);               // �Hptr1�ҫ��V�����󬰪�ȫإ߷s���� 
   
   ptr1->show(); 
   ptr2->show();
   
   delete ptr1;                              // ����ptr1�ҫ��V���O�ЪŶ�
   cout << "�Nptr1�ҫ��V������R����..." << endl; 
   ptr2->show(); 

   delete ptr2;                              // ����ptr2�ҫ��V���O�ЪŶ�
   system("pause");
   return 0;
}
