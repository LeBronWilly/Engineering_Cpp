#include <iostream> // 引入資料輸入、輸出的標頭
#include <cstdlib> // 標準函數庫
#include <fstream> // 用來讀取檔案資料，也可將資料寫入檔案儲存
#include <ctime>
#include <iomanip>
#include <cstring> // 用來處理字串的類別
#include <cmath>
#include <conio.h>
using namespace std; // 宣告std命名空間
unsigned int seed =(unsigned int)time(NULL); // 以系統時間當亂數種子seed(全域變數)
fstream file; // 宣告一個fstream(檔案輸出、輸入)物件

class LBJ{
	private:

	public:

		LBJ(){ // 預設建構

		}

};

int main()
{
	srand(seed);
	LBJ king;
	int a[][3]={{3,2,1},
				{5,6,7},
				{2,4,6}};
	int b[][2]={{2,3},
				{3,4},
				{6,2}};
	int c[3][2]={0};
	
	for(int m=0;m<sizeof(a[0])/sizeof(a[0][0]);m++){      	// m<3
		for(int p=0;p<sizeof(b[0])/sizeof(b[0][0]);p++){   // p<2
			for(int n=0;n<sizeof(c)/sizeof(c[0]);n++){    // n<3
				c[m][p] += a[m][n] * b[n][p]; /*陣列a乘上陣列b,存入陣列c */
			}
//			printf("%d ", c[m][p]); /*輸出矩陣c */
			cout << c[m][p] << " ";
		}
		cout<<"\n"; //換列輸出矩陣c 
	}
	
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "★ Coded by LeBron-Willy Fang ★\n\n";
	system("pause");
    return 23;
}

