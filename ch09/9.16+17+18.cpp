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

class LBJ{
	private:

	public:

		LBJ(){ // 預設建構

		}

};

void display(char *a,int n){
	cout<<(a+n)<<"\n";
	
	for(int i=n;i<strlen(a);i++){
		cout<<*(a+i);
	}
	cout<<"\n";
}

void show(char *ptr){
	int i;
	for(i=0;i<24;i++){
		if ((*(ptr+i)>='A') && (*(ptr+i)<='Z')){
			*(ptr+i)+=32;
		}else if((*(ptr+i)>='a') && (*(ptr+i)<='z')){
			*(ptr+i)-=32;
		}else if(*(ptr+i)==' '){
			*(ptr+i)='*';
		}else if (*(ptr+i)=='\0'){
			break;
		}
		cout<<*(ptr+i);
	}
	
}

int main()
{
	srand(seed);
	LBJ king;
//	char *a="LeBron James is The King";
	char a[30]="LeBron James is The King";
	int n=4;
	cout<<"Key in a str：";
	cin.getline(a,30);
	cout<<"Key in a num：";
	cin >> n;
	display(a,n);
	show(a);
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "★ Coded by LeBron-Willy Fang ★\n\n";
	system("pause");
    return 23;
}

