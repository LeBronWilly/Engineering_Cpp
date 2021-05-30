#include <iostream> // 引入資料輸入、輸出的標頭
#include <cstdlib> // 標準函數庫
#include <fstream> // 用來讀取檔案資料，也可將資料寫入檔案儲存
#include <ctime> // 時間函數庫
#include <iomanip>
#include <cstring> // 用來處理字串的類別
#include <cmath> // 數學函數庫
#include <conio.h>
#include <algorithm> // 演算法函數庫
#include <vector>
#include <iterator>
using namespace std; // 宣告std命名空間
unsigned int seed =(unsigned int)time(NULL); // 以系統時間當亂數種子seed(全域變數)
fstream file; // 宣告一個fstream(檔案輸出、輸入)物件

class Caaa{
	private:
	 int num;
	 
	 
	public:
	 
	 
	 Caaa():num(5){ // 預設建構元
		
		
		
	 }
	 void get_num(){
		cout<<num<<endl; 
	 }
	 
	 
};

class Cbbb: private Caaa{
	
	public:

		void show(){
//			cout<<num<<endl; 
			get_num();
		}
};


int main()
{
	srand(seed);
	Cbbb b;

	
	b.show();
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "★ Coded by LeBron-Willy Fang ★\n\n";
	system("pause");
    return 23;
}

