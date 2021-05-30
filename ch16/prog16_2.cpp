// prog16_2, �]�w�B��l�h�����i������
#include <iostream>
#include <cstdlib>
#include <cstring> // �ΨӳB�z�r�ꪺ���O
using namespace std;
class CWin                              // �w�q�������OCWin
{
   private:
     char id;
     int width,height;
     
   public: 
     CWin(char i='D',int w=10,int h=10):id(i),width(w),height(h)  
     {
        cout << "CWin()�غc���Q�I�s�F..." << endl;
     }
     CWin(int w,int h):width(w),height(h)  
     {
        cout << "CWin(int w,int h)�غc���Q�I�s�F..." << endl;
        id='K';
     }     
     void show_member(void)  
     {
        cout << "Window " << id << ": ";
        cout << "width=" << width << ", height=" << height << endl;
     }
};

class CTextWin : public CWin
{
   private:
      char text[20];
      
   public:
      CTextWin(int w,int h): CWin(w,h)  // CTextWin(int,int)�غc��
//      CTextWin(int w,int h)  // CTextWin(int,int)�غc��
	  {
         cout << "CTextWin(int w,int h)�غc���Q�I�s�F..." << endl; 
         strcpy(text,"Have a good night");
      }
      CTextWin(char *tx)                // CTextWin(char *)
      {
         cout << "CTextWin(char *tx)�غc���Q�I�s�F..." << endl; 
         strcpy(text,tx);
      }      
      void show_text()
      {
         cout << "text = " << text << endl;
      }
};

int main(void)
{
   CTextWin tx1("Hello C++"); 	        // �I�s39~43�檺CTextWin()�غc��
   CTextWin tx2(60,70);		            // �I�s34~38�檺CTextWin()�غc��

   tx1.show_member();   
   tx1.show_text();
   
   tx2.show_member();
   tx2.show_text();   
   
   system("pause");
   return 0;
}
