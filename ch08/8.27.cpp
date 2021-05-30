#include <iostream> // 引入資料輸入、輸出的標頭
#include <cstdlib> // 標準函數庫
#include <fstream> // 用來讀取檔案資料，也可將資料寫入檔案儲存
#include <ctime>
#include <iomanip>
#include <cstring> // 用來處理字串的類別
#include <cmath> // 數學函數庫
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
	string name[]={"Kobe","LeBron James","KD35","JimmyBucket","PG 13"};
	int s[5]={85,100,78,95,70};
	for(int i=0;i<5;i++){
		cout<<name[i]<<"：";
		cin>>s[i];
	}
	cout<<"\n\n"; 
	for(int i=0;i<5;i++){
		cout<<name[i]<<"  ";
	}
	cout<<"\n";
	for(int i=0;i<5;i++){
		cout<<setw(name[i].length())<<s[i]<<"  ";	
	}
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "★ Coded by LeBron-Willy Fang ★\n\n";
	system("pause");
    return 23;
}

