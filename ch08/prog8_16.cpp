// prog8_16, C++���A�r��P�ƭȲV�X��J
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main(void)
{
   int num;
   string proverb;
   cout << "��J�����ƪ�����: ";
   (cin >> num).get();
   cout << "��J���C�L���r��: ";
   getline(cin,proverb);
   for(int i=1;i<=num;i++)
      cout << proverb << endl;
   
   system("pause");
   return 0;
}
