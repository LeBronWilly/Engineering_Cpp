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

double avg(int a, int b=5,int c=7){
	return (a+b+c)/3.0; //一定要除以3.0，不是3 
}
int main()
{
	srand(seed);
	LBJ king;
//	int a,b,c;
//	cout << "key in 3 nums：";
//	cin >>a >>b>>c;
	printf("avg(13)=%f\navg(9,16)=%f\navg(8,17,3)=%f\n",avg(13),avg(9,16),avg(8,17,3));
	
	
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "★ Coded by LeBron-Willy Fang ★\n\n";
	system("pause");
    return 23;
}

