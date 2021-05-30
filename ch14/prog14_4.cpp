// prog14_4, �ϥΰʺA�O����t�m, ���~���ܽd
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
//   CWin *ptr;  			                 // �ŧiptr�����VCWin���󪺫���
//   ptr=new CWin('B'); 	                 // �إ߷s������A����ptr���V��
   CWin *ptr=new CWin('B'); 
   
   win1.show(); 			             // �Hwin1����I�sshow()���
   ptr->show();			                 // �Hptr���ЩI�sshow()���

   system("pause");
   return 0;
}
