//prog19_5, ��Ƽ˪O���ϥνd��
#include <iostream>   
#include <cstdlib>
using namespace std;
template <class T>	          // �w�q��Ƽ˪O 
T add(T a,T b)  		      // add()���Ǧ^���A��T�A�ǤJ����Ӥ޼ƫ��A�]�OT
{
   T sum=a+b; 		          // �]�w�ܼ�sum�����A��T�A��ȵ���a+b
   return sum;
}

int main(void)
{
   cout << "add(3,4)=" << add<int>(3,4) << endl;   
   cout << "add(3.2,4.6)=" << add<double>(3.2,4.6) << endl;

   system("pause");
   return 0;
}
