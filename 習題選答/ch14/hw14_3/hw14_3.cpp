// hw14_3,
#include <iostream>
#include <cstdlib>
using namespace std;
class Caaa
{
   public:
     Caaa();
    ~Caaa();
};

Caaa::Caaa()    // �غc��
{
   cout << "constructor called" << endl;
}

Caaa::~Caaa()   // �Ѻc��
{
   cout << "destructor called " << endl;
   system("pause");
}

int main(void)
{
   Caaa obj;

   system("pause");
   return 0;
}

/* output------------------------
constructor called
�Ы����N���~�� . . .
destructor called
�Ы����N���~�� . . .
-------------------------------*/
