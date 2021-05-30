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

void show(int x,char abc[26]){
	if(x%2==0){
		for(int i=1;i<26;i+=2){
			cout<<abc[i]<<" ";
		}
	}else{
		for(int i=0;i<26;i+=2){
			cout<<abc[i]<<" ";
		}
	}
}
int main()
{
	srand(seed);
	LBJ king;
//	char a=75;
	char abc[26];
	int x;
//	cout<<a; // 輸出K
	for(int i=0;i<26;i++){
		abc[i]=97+i;
		cout<<abc[i]<<" ";
	}
	cout<<"\n\nKey in a number：";
	cin >> x;
	show(x,abc);
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "★ Coded by LeBron-Willy Fang ★\n\n";
	system("pause");
    return 23;
}

