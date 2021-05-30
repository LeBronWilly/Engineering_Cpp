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

void reverse(char str[]){
	int i=0,j=0;
	while(str[i]!='\0'){
		i++;
	}
	for(j=i-1;j>=0;j--){ // i-1以去除結束字元
		printf("%c",str[j]);
	}
	cout<<"\nstr位址="<<&str;
	printf("\n\n");
}


int main()
{
	srand(seed);
	LBJ king;
	char str[23];
	while(true){
		cout<<"Key in a string：";
		cin.getline(str,23);
		cout<<"Reverse print：";
		reverse(str);
	}
	
	
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "★ Coded by LeBron-Willy Fang ★\n\n";
	system("pause");
    return 23;
}

