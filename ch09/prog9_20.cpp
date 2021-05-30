// prog9_20, 以指標變數指向字串
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
int main(void)
{
   char name[20];
   char *ptr="LeBron James is King.";		// 將指標指向字串"How are you?"

   cout << "What's your name? ";	
   cin.getline(name,20);			                // 輸入字串
   cout << "Hi, " << name << ", " << ptr << endl<< endl;	// 輸出
   
   cout << "ptr+1 = " << (ptr+1)<< endl;
   cout << "ptr = " << ptr<< endl;
   cout << "*(ptr+1) = " << *(ptr+1)<< endl;
   cout <<"strlen(ptr) = " << strlen(ptr)<< endl<< endl;
   
   cout << "(++ptr) = " << (++ptr) << " (先讓ptr=ptr+1，並輸出ptr)"<< endl;
   cout << "ptr = " << ptr<< " (ptr則將少去第1個(index=0)的字元)"<< endl;
   cout << "*(ptr+1) = " << *(ptr+1)<< endl;
   cout <<"strlen(ptr) = " << strlen(ptr)<< endl<< endl;
//   cout << (++name)<< endl;
   
   
   system("pause");
   return 0;
}
