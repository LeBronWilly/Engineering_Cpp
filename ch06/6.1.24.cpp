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
int64_t fact(int n){
	int64_t tem=1;
	int i=n;
	if (n>0){
		do{
			tem*=i;
			i-=1;
		}while(i>0);
		return tem+fact(n-1);	
	}else{
		return 0;
	}
	
//	if (n>0){
//		int tem=1;
//		for(int i=n;i>=1;i--){
//			tem*=i;
//		}return tem+fact(n-1);
//	}else{
//		return 0;
}
int main()
{
	srand(seed);
	LBJ king;
	int n;
	while (true){
		cout<<"n=";
		cin >>n;
		if (n<1){
			cout<<"Idiot! Key right again!\n\n";
			continue;
		}
		cout<<"1! + 2! + 3! +...+ n! = "<< fact(abs(n)) << "\n\n";
	}
	
	
	
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "★ Coded by LeBron-Willy Fang ★\n\n";
	system("pause");
    return 23;
}

