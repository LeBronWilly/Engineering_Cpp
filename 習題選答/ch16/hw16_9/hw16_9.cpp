// hw16_9,
#include <iostream>
#include <cstdlib>
using namespace std;
class Caaa    // �w�qCaaa���O�A�b���������O
{
   public:
     int num1,num2;
};

class Cbbb : public Caaa  // �w�qCbbb���O�A�~�Ӧ�Caaa���O
{
   public:
      void set_num(int a, int b)
      {
         num1=a;
         num2=b;
      }
      void show()
      {
         cout << "num1= " << num1 << endl;
         cout << "num2= " << num2 << endl;
      }
};

int main(void)
{
   Cbbb obj;

   obj.set_num(10,20);
   obj.show();

   system("pause");
   return 0;
}

/* output-------------------------------
num1= 10
num2= 20
--------------------------------------*/
