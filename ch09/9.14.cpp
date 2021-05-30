#include <iostream> // 引入資料輸入、輸出的標頭
#include <cstdlib> // 標準函數庫
#include <fstream> // 用來讀取檔案資料，也可將資料寫入檔案儲存
#include <ctime> // 時間函數庫
#include <iomanip>
#include <cstring> // 用來處理字串的類別
#include <cmath> // 數學函數庫
#include <conio.h>
#include <algorithm> // 演算法函數庫
using namespace std; // 宣告std命名空間
unsigned int seed =(unsigned int)time(NULL); // 以系統時間當亂數種子seed(全域變數)
fstream file; // 宣告一個fstream(檔案輸出、輸入)物件

class LBJ
{
	private:

	public:

		LBJ(){ // 預設建構

		}

};


int main()
{
	srand(seed);
	LBJ king;
	double a[10],b,*c;
	cout<<"b位址 = "<<&b<<"\n"; 
	for(int i=0;i<10;i++)
	{
		cout<<"a["<<i <<"]位址 = "<<(a+i)<<"\n"; 
	}
	 
	cout<<"位址差值(a+0)-(&b) = "<<(a+0)-(&b);
	cout<<" ("<<(a+0)-(&b)<<"數之隔)"<<"\n";
	cout<<"位址差值(a+4)-(&b) = "<<(a+4)-(&b);
	cout<<" ("<<(a+4)-(&b)<<"數之隔)";
	
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "★ Coded by LeBron-Willy Fang ★\n\n";
	system("pause");
    return 23;
}

