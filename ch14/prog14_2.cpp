// prog14_2, �T�w�Ŷ����O����t�m
#include <iostream>
#include <cstdlib>
#include <cstring> 
using namespace std;
class CWin                      // �w�q�������OCWin
{
   private:
     char id,title[20];

   public:     
     CWin(char i='D', char text[]="Default window"):id(i)  
     {
        strcpy(title,text);     // �Ntext�ҫ��V���r�������title�}�C��
     }
     ~CWin()                    // �Ѻc��
     {
        cout << "�Ѻc���Q�I�s�F�AWin " << this->id << "�Q�P���F.." << endl;
        system("pause");
     } 
     void show(void)            // ���id�Ptitle����
     {
        cout << "Window " << id << ": " << title << endl;
     }
};

int main(void)
{
   CWin win1('A',"Main window"); 	
   CWin win2('B'); 	 
   
   win1.show(); 
   win2.show();

   cout << "sizeof(win1)= " << sizeof(win1) << endl;   
   cout << "sizeof(win2)= " << sizeof(win2) << endl;   

   system("pause");
   return 0;
}
