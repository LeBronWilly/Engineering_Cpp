//prog19_6, �A�����ٲ�
#include <iostream>   
#include <cstdlib>
using namespace std;
template <class T>          // �w�q��Ƽ˪Oadd()
T add(T a,T b)
{
   T sum=a+b;
   return sum;
}

int main(void)
{
   cout << "add(3,4)=" << add(3,4) << endl;	        // �I�sadd(3,4)
   cout << "add(3.2,4.6)=" << add(3.2,4.6) << endl; // �I�s add(3.2,4.6)

   system("pause");
   return 0;
}
