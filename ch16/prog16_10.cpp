// prog16_10, �ץ�prog16_9�S�����g�����غc�������~
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

class CWin                              // �w�qCWin���O�A�b���������O
{
   protected:
     char id;

   public:
     CWin(char i='D'):id(i)   	        // �����O���غc��
     {
        cout << "CWin()�غc���Q�I�s�F..." << endl;
     }
     CWin(const CWin& win)    	        // �����O�������غc��
     {
        cout << "CWin()�����غc���Q�I�s�F..." << endl;
        id=win.id;
     }
     ~CWin()     				        // �����O���Ѻc��
     {
        cout << "CWin()�Ѻc���Q�I�s�F... " << endl;
        system("pause");
     }
};

class CTextWin : public CWin            // �w�qCTextWin���O�A�~�Ӧ�CWin���O
{
   private:                             // �l���O�̪��p������
      char *text;

   public:
      CTextWin(char i,char *tx):CWin(i)     	// �l���O���غc��
      {
         cout << "CTextWin()�غc���Q�I�s�F..." << endl;
         text= new char[strlen(tx)+1];
         strcpy(text,tx);
      }
      CTextWin(const CTextWin &tx):CWin(tx)	   // �l���O�������غc��
      {
         cout << "CTextWin()�����غc���Q�I�s�F..." << endl;
         text= new char[strlen(tx.text)+1];
         strcpy(text,tx.text);
      }
      ~CTextWin()
      {
         delete [] text;  		        // ����text���Щҫ��V���O����
         cout << "CTextWin()�Ѻc���Q�I�s�F... " << endl;
         system("pause");
      }
      void show_member()                // �l���O��show_member()���
      {
         cout << "Window " << id << ": ";
         cout << "text = " << text << endl;
      }
      void set_member(char i,char *tx)  // �l���O��set_member()���
      {
         id=i;
		 delete [] text;				    // �N������V���O��������
		 text= new char[strlen(tx)+1];   // ���s�t�m�O����
         strcpy(text,tx);
      }
};
int main(void)
{
   CTextWin tx1('A',"Hello C++");	    // �إߤl���O������
   CTextWin tx2(tx1);

   tx1.show_member();
   tx2.show_member();

   cout << "���tx1���󪺦�������..." << endl;
   tx1.set_member('B',"Welcome C++");

   tx1.show_member();
   tx2.show_member();

   system("pause");
   return 0;
}
