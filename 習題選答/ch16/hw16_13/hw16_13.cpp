// hw16_13,
#include <iostream>
#include <cstdlib>
using namespace std;
class Caaa    // �w�qCaaa���O�A�b���������O
{
   private:
     int num;

   public:
     Caaa()
     {
        num=5;
     }
   public:
     void show()
     {
        cout << "num= " << num << endl;
     }
};

class Cbbb : public Caaa  // �w�qCbbb���O�A�~�Ӧ�Caaa���O
{
};

int main(void)
{
   Cbbb b;
   b.show();

   system("pause");
   return 0;
}

/* output-------------------------------
num= 5
--------------------------------------*/
