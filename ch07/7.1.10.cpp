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
double power(int x,int n){
	double p=1;
	for(int i=1;i<=n;i++){
		p*=x;
	}
	return p;
}
double power(double x,int n){
	double p=1;
	for(int i=1;i<=n;i++){
		p*=x;
	}
	return p;
}

int main()
{
	srand(seed);
	LBJ king;
	int a,n;
	double b;
	cout<< "a=?b=?n=?";
	cin >> a>>b>>n;
	cout<< power(a,n) << " and " << power(b,n);
	
	
	
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "★ Coded by LeBron-Willy Fang ★\n\n";
	system("pause");
    return 23;
}

