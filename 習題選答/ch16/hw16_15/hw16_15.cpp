// hw16_15,
#include <iostream>
#include <cstdlib>
using namespace std;
class Caaa    // �w�qCaaa���O�A�b���������O
{
   protected:
      int num;
   public:
      Caaa()
      {
         num=5;
      }
};

class Cbbb : protected Caaa  // �w�qCbbb���O�A�~�Ӧ�Caaa���O
{
   public:
     void show()
     {
        cout << "num= " << num << endl;
     }
};

class Cccc : public Cbbb  // �w�qCccc���O�A�~�Ӧ�Cbbb���O
{
};

int main(void)
{
   Cccc c;
   c.show();

   system("pause");
   return 0;
}

/* output-------------------------------
num= 5
--------------------------------------*/
