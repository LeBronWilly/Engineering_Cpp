// prog8_14, �r��P�ƭȲV�X��J
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   int age;
   char name[20];
   cout << "How old are you? ";
//   cin >> age;
//   cin.get();
   (cin>>age).get();
   cout << "What's your name? ";
   cin.getline(name,20);
   cout << name << " is " << age << "-years-old!" << endl;
   system("pause");
   return 0;
}
