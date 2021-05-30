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

int main(int argc, char *argv[])
{
	srand(seed);
	LBJ king;
//	cout<< "長方形的長 = " << argv[1]<<"\n";
//	cout<< "長方形的寬 = " << argv[2]<<"\n";
//	cout<< "長方形的高 = " << argv[3]<<"\n";
//	float v=1.0;
//	for(int i=1;i<=3;i++){
//		v*=atof(argv[i]);
//	}
	cout << "小數相除\n";
	cout<< "前數除以後數的商數 = " << (int)(atof(argv[1])/atof(argv[2]))<<"\n";
	cout<< "餘數(前數-商數*後數) = " << atof(argv[1]) - ((int)(atof(argv[1])/atof(argv[2])))*atof(argv[2]);
	
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "★ Coded by LeBron-Willy Fang ★\n\n";
	system("pause");
    return 23;
}

