#include <iostream> // 引入資料輸入、輸出的標頭
#include <cstdlib> // 標準函數庫
#include <fstream> // 用來讀取檔案資料，也可將資料寫入檔案儲存
#include <ctime>
#include <iomanip>
#include <cstring> // 用來處理字串的類別
#include <cmath>
#include <conio.h>
using namespace std; // 宣告std命名空間
#define pi 3.1415926
#define VOLUMN(r)  pi*(4.0/3.0)*pow(r,3)
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
	float r;
	cout<< "半徑r = ";
	cin>>r;
	cout<<"球體積VOLUMN(r) = "<< VOLUMN(r);
	
	
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "★ Coded by LeBron-Willy Fang ★\n\n";
	system("pause");
    return 23;
}

