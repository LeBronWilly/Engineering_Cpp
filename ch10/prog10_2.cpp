// prog10_2, 印出陣列的位址
#include <iostream>
#include <cstdlib>
using namespace std;
int main(void)
{
   int num[3][4]={{0,3,4,9},{3,5,4,6},{7,4,4,8}};	// 宣告3×4的二維陣列num
   char s[3][4]={"LBJ","KD","PG"};

   cout<<"=====int num[3][4]====="<< endl;
   cout << "num=" << num << endl;		  // 印出雙重指標num的值
   cout << "&num=" << &num << endl; 	  // 印出雙重指標num的位址
   cout << "*num=" << *num << endl;       // 印出雙重指標num所指向之指標的值

   cout << "num[0]=" << num[0] << endl;	  // 印出指標常數num[0]的值
   cout << "num[1]=" << num[1] << endl;   // 印出指標常數num[1]的值
   cout << "num[2]=" << num[2] << endl;	  // 印出指標常數num[2]的值

   cout << "&num[0]=" << &num[0] << endl; // 印出指標常數num[0]的位址
   cout << "&num[1]=" << &num[1] << endl; // 印出指標常數num[1]的位址
   cout << "&num[2]=" << &num[2] << endl; // 印出指標常數num[2]的位址
   
   cout << "*num[0]=" << *num[0] << endl; // 印出num[0][0]的值
   cout << "*num[1]=" << *num[1] << endl; // 印出num[1][0]的值
   cout << "*num[2]=" << *num[2] << endl; // 印出num[2][0]的值
   
   cout<< "\n\n";
   
   cout<<"====char s[3][4]====="<< endl;
   cout << "s=" << s << endl;		  // 印出雙重指標num的值
   cout << "&s=" << &s << endl; 	  // 印出雙重指標num的位址
   cout << "*s=" << *s << endl;       // 印出雙重指標num所指向之指標的值

   cout << "s[0]=" << s[0] << endl;	  // 印出指標常數num[0]的值
   cout << "s[1]=" << s[1] << endl;   // 印出指標常數num[1]的值
   cout << "s[2]=" << s[2] << endl;	  // 印出指標常數num[2]的值

   cout << "&s[0]=" << &s[0] << endl; // 印出指標常數num[0]的位址
   cout << "&s[1]=" << &s[1] << endl; // 印出指標常數num[1]的位址
   cout << "&s[2]=" << &s[2] << endl; // 印出指標常數num[2]的位址
   
   cout << "*s[0]=" << *s[0] << endl; // 印出num[0][0]的值
   cout << "*s[1]=" << *s[1] << endl; // 印出num[1][0]的值
   cout << "*s[2]=" << *s[2] << endl; // 印出num[2][0]的值

   system("pause");
   return 0;
}
