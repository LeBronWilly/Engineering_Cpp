// prog8_8, 傳遞二維陣列
#include <iostream>
#include <cstdlib>
using namespace std;
#define LEN 3
#define WID 5
//void show(int [LEN][WID]);				      // 函數原型的宣告
inline void show(int a[LEN][WID])            		  // 顯示陣列內容 
{  
   for(int i=0;i<LEN;i++)
   {
      for(int j=0;j<WID;j++)
         cout << a[i][j] << " ";
      cout << endl;         
   }
   return;
}

int main(void)
{
   int A[LEN][WID]={{81,52,13,96,27},		  // 宣告陣列並設定初值
                    {24,23,10,32,16},
					{78} // 後面4個空白的會以0代入 
					};
   show(A);
   
   system("pause");
   return 0;
}


