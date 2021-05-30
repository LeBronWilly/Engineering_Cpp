// prog16_6, prog16_5���ץ���
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
class CWin                      // �w�q�����OCWin
{
   private:
     char id;
     
   public:     
     CWin(char i):id(i) {}
     
     char get_id()		        // get_id()��ơA�ΨӨ��oid����
     {
        return id;
     }
};

class CTextWin : public CWin    // �w�q�l���OCTextWin
{
   private:
      char text[20];
      
   public:
      CTextWin(char i,char *tx):CWin(i)
      {
         strcpy(text,tx);
      }
      void show()
      {
         cout << "Window " << get_id() << ": ";       // �I�s�����O�̪�get_id()
         cout << "text = " << text << endl;
      }
};

int main(void)
{
   CTextWin txt('A',"Hello C++");
  
   txt.show();
   cout<<txt.get_id()<<endl;
   
   system("pause");
   return 0;
}
