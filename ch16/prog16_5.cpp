// prog16_5, ���~���Ҥl--�s��������O�̪��p������
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin                                  // �w�q�����OCWin
{
   private:
     char id;
 
   public:
     CWin(char i):id(i) {}
};

class CTextWin : public CWin                // �w�q�l���OCTextWin
{
   private:
      char text[20];
      
   public:
      CTextWin(char i, char *tx):CWin(i)
      {
         strcpy(text,tx);
      }
      void show()
      {
         cout << "Window " << id << ": ";   // Ū�������O�̪��p������
         cout << "text = " << text << endl;
      }
};

int main(void)
{
   CTextWin txt('A',"Hello C++");

   txt.show();
   
   system("pause");
   return 0;
}
