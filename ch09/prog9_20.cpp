// prog9_20, �H�����ܼƫ��V�r��
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
int main(void)
{
   char name[20];
   char *ptr="LeBron James is King.";		// �N���Ы��V�r��"How are you?"

   cout << "What's your name? ";	
   cin.getline(name,20);			                // ��J�r��
   cout << "Hi, " << name << ", " << ptr << endl<< endl;	// ��X
   
   cout << "ptr+1 = " << (ptr+1)<< endl;
   cout << "ptr = " << ptr<< endl;
   cout << "*(ptr+1) = " << *(ptr+1)<< endl;
   cout <<"strlen(ptr) = " << strlen(ptr)<< endl<< endl;
   
   cout << "(++ptr) = " << (++ptr) << " (����ptr=ptr+1�A�ÿ�Xptr)"<< endl;
   cout << "ptr = " << ptr<< " (ptr�h�N�֥h��1��(index=0)���r��)"<< endl;
   cout << "*(ptr+1) = " << *(ptr+1)<< endl;
   cout <<"strlen(ptr) = " << strlen(ptr)<< endl<< endl;
//   cout << (++name)<< endl;
   
   
   system("pause");
   return 0;
}
