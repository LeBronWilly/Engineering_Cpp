#include <iostream> // 引入資料輸入、輸出的標頭
#include <cstdlib> // 標準函數庫
#include <fstream> // 用來讀取檔案資料，也可將資料寫入檔案儲存
#include <cstring>
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
float fact(int n){
	if (n>0){
		float tem=1;
		for(int i=1;i<=n;i++){
			tem=tem*i;
		}
		return 1/tem+fact(n-1);
	}else{
		return 0;
	}
}
int main()
{
	srand(seed);
	LBJ king;
	int n;
	cout << "n=";
	cin >> n;
	cout << "n/3 = " << (float)n/3 <<"\n";
	cout << "1/1! + 1/2! + ..... + 1/n! = "<< fact(n);
	
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "★ Coded by LeBron-Willy Fang ★\n\n";
	system("pause");
    return 23;
}

