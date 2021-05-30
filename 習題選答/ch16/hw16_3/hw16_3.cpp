// hw16_3,
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin    // �w�qCWin���O�A�b���������O
{
   private:
     char id;
     int width,height;

   public:
     CWin(char i='D',int w=10,int h=10):id(i),width(w),height(h)
     {
        cout << "CWin()�غc���Q�I�s�F..." << endl;
     }
     void show_member(void)  // ��Ʀ����A�Ψ���ܸ�Ʀ�������
     {
        cout << "Window " << id << ": ";
        cout << "width=" << width << ", height=" << height << endl;
     }
};

class CTextWin : public CWin  // �w�qCTextWin���O�A�~�Ӧ�CWin���O
{
   private:                  // �l���O�̪��p������
      char *text;

   public:     // �l���O�̪���������
      CTextWin(char *tx)     // �l���O���غc��
      {
         cout << "CTextWin()�غc���Q�I�s�F..." << endl;
         text=new char[50];
         strcpy(text,tx);
      }
      void show_text()       // �l���O����Ʀ���
      {
         cout << "text = " << text << endl;
      }
      ~CTextWin()
      {
         delete [] text;
      }
};

int main(void)
{
   CWin win('A',50,60); 	   		// �إߤ����O������
   CTextWin txt("Hello C++");		// �إߤl���O������

   win.show_member();  	// �H�����O����I�s�����O�����
   txt.show_member();		// �H�l���O����I�s�����O�����
   txt.show_text();		// �H�l���O����I�s�l���O�����

   cout << "win ������F " << sizeof(win) << " bytes" << endl;
   cout << "txt ������F " << sizeof(txt) << " bytes" << endl;

   system("pause");
   return 0;
}

/* output-------------------------------
CWin()�غc���Q�I�s�F...
CWin()�غc���Q�I�s�F...
CTextWin()�غc���Q�I�s�F...
Window A: width=50, height=60
Window D: width=10, height=10
text = Hello C++
win ������F 12 bytes
txt ������F 16 bytes
--------------------------------------*/
