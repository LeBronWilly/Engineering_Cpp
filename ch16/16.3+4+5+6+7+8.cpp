// prog16_1, �~�Ӫ�²��d��
#include <iostream>
#include <cstdlib>
#include <cstring> 
using namespace std;
class CWin                          // �w�qCWin���O�A�b���������O
{
   private:
     char id;
     int width,height;
     double kobe;
     
   public:
     CWin(char i='D',int w=10,int h=10):id(i),width(w),height(h)  
     {
        cout << "CWin()�غc���Q�I�s�F..." << endl;
     }
     void show_member(void)  	    // �������show_member�A�Ψ���ܸ�Ʀ�������
     {
        cout << "Window " << id << ": ";
        cout << "width=" << width << ", height=" << height << endl;
     }
     friend void show_member2(CWin x)  	    // �ͽ˨��show_member2�A�Ψ���ܸ�Ʀ�������
     {
        cout << "Window " << x.id << ": ";
        cout << "width=" << x.width << ", height=" << x.height << endl;
     }
     void set_id(char xx){
     	id = xx;
	 }
};

class CTextWin : public CWin        // �w�qCTextWin���O�A�~�Ӧ�CWin���O
{
   private:                  	    // �l���O�̪��p������text
      char *text;
      
   public:     					    // �l���O�̪���������
      CTextWin(char *tx)     		// �l���O���غc��
      {
         cout << "CTextWin()�غc���Q�I�s�F..." << endl; 
         text = new char [strlen(tx)+1];
		 strcpy(text,tx);
      }
      void show_text();			    // �l���O���������show_text(�쫬)
//      {
//         cout << "text = " << text << endl;
//      }
      void set_text(char *tt)			    // �l���O���������set_text
      {
         text = new char [strlen(tt)+1];
         strcpy(text,tt);
      }
      void set_member(char x,char *y)		// �l���O���������set_member
      {
         text = new char [strlen(y)+1];
         strcpy(text,y);
         set_id(x);
      }
      ~CTextWin()
	  {
	  	delete [] text;
	  }
};

void CTextWin:: show_text()			    // �l���O���������show_text
      {
         cout << "text = " << text << endl;
      }

int main(void)
{
   CWin win('A',50,60); 	   		// �إߤ����O������
   CTextWin txt("Hello C++");		// �إߤl���O������

   win.show_member();  			    // �H�����O����I�s�����O�����
   txt.show_member();				// �H�l���O����I�s�����O�����
   txt.show_text();				    // �H�l���O����I�s�l���O�����
   
   cout << "win ������F " << sizeof(win) << " bytes" << endl; // 24
   cout << "txt ������F " << sizeof(txt) << " bytes" << endl; // 32
   
   txt.set_text("Python");
   txt.show_member();
   txt.show_text();
   
   txt.set_member('L',"R");
   txt.show_member();
   txt.show_text();
   
   show_member2(win);
   show_member2(txt);
   
   system("pause");
   return 0;
}
