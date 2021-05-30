// prog16_7, protected�������ϥ�
#include <iostream>
#include <cstdlib>
using namespace std;
class CWin          // �w�q�������OCWin
{
   protected:      
     char id;      // ��id�ŧi��protected�����A�ϱo���]�i�H�b�l���O�̨ϥ�
 
   public:
     CWin(char i):id(i) {}
};

class CTextWin : public CWin
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
         cout << "Window " << id << ": ";   // Ū�������O�̪��O�@����
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
