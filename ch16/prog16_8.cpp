// prog16_8, �~�Ӫ�²��d��
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
class CWin                                    // �w�qCWin���O�A�b���������O
{
   protected:
     char id;
     
   public:
     CWin(char i):id(i){}
     
     void show_member(); 	              // �����O��show_member()���

};

void CWin:: show_member(void)  	              // �����O��show_member()���
{
    cout << "�����O��show_member()��ƳQ�I�s�F..." << endl; 
    cout << "Window " << id << endl;
}

class CTextWin : public CWin	              // �w�qCTextWin���O�A�~�Ӧ�CWin���O
{
   private:                  	              // �l���O�̪��p������
      char text[20];
      
   public:     
      CTextWin(char i,char *tx):CWin('i')     // �l���O���غc��
      {
         strcpy(text,tx);
      }
      void show_member();
//	  {
//   		cout << "�l���O��show_member()��ƳQ�I�s�F..." << endl; 
//    	cout << "Window " << id << ": ";         
//   		cout << "text = " << text << endl;
//	  };                      // �l���O��show_member()���
};

void CTextWin:: show_member()                      // �l���O��show_member()���
{
    cout << "�l���O��show_member()��ƳQ�I�s�F..." << endl; 
    cout << "Window " << id << ": ";         
    cout << "text = " << text << endl;
}

int main(void)
{
   CTextWin txt('A',"Hello C++");		      // �إߤl���O������
   
   txt.show_member();			              // �H�l���O����I�sshow_member()���

   system("pause");
   return 0;
}
