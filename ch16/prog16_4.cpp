// prog16_4, prog16_3���~���ץ�
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
class CWin                     // �w�q�������OCWin
{
   private:
     char id;
     int width,height;
     
   public:     
     CWin(int w,int h):width(w),height(h)  
     {
        cout << "CWin(int w,int h)�غc���Q�I�s�F..." << endl;
        id='K';
     } 
     CWin()
     {
        cout<< "�S���޼ƪ�CWin()�غc���Q�I�s�F..." << endl;     
     }    
};

class CTextWin : public CWin   // �w�q�l���OCTextWin
{
   private:
      char text[20];
      
   public:
      CTextWin(char *tx) 
      {
         cout << "CTextWin()�غc���Q�I�s�F..." << endl; 
         strcpy(text,tx);
      }      
};

int main(void)
{
   CTextWin tx1("Hello C++");  
   
   system("pause");
   return 0;
}
