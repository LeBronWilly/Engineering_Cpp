// hw16_17,
#include <iostream>
#include <cstdlib>
using namespace std;
class Caaa    // �w�qCaaa���O�A�b���������O
{
   public:
     int num1,num2;
     Caaa()
     {
         num1=1;
         num2=1;
     }
     Caaa(int a, int b)
     {
         num1=a;
         num2=b;
     }
     void show()
      {
         cout << "num1= " << num1;
         cout << ", num2= " << num2 << endl;
      }
};

class Cbbb : public Caaa  // �w�qCbbb���O�A�~�Ӧ�Caaa���O
{
   public:
      Cbbb():Caaa()
      {}
};

int main(void)
{
   Cbbb obj;
   obj.show();

   system("pause");
   return 0;
}

/* output-------------------------------
num1= 1, num2= 1
--------------------------------------*/
