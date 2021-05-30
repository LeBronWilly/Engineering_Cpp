#include <iostream> // 引入資料輸入、輸出的標頭
#include <cstdlib> // 標準函數庫
#include <fstream> // 用來讀取檔案資料，也可將資料寫入檔案儲存
#include <cstring>
#include <ctime>
#include <iomanip>
#include <cstring> // 用來處理字串的類別
#include <cmath>
#include <conio.h>
using namespace std; // 宣告std命名空間
unsigned int seed =(unsigned int)time(NULL); // 以系統時間當亂數種子seed(全域變數)
fstream file; // 宣告一個fstream(檔案輸出、輸入)物件
bool primeQ(int n){
	int c=0;
	for(int i=1;i<=n;i++){
		if(n%i==0){
			c+=1;
			if (c==1){
				cout<< n<< "的因數有：" <<i;
			}else{
				cout<<"、"<< i;
			}
			 
		}
	}
	if(c==2){
		cout<<endl<<n<<"為質數！\n\n";
		return true;
	}else if(n==1 or n==0){
		cout<<endl << n << "不為質數也不為合數！\n\n";
	}else{
		cout<<endl << n << "為合數！\n\n";
		return false;
	}
}

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
	static int n=0;
	while (true){
		cout<< "Key in a number：";
		cin >> n;
		primeQ(n);
	}
	
	
	
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "★ Coded by LeBron-Willy Fang ★\n\n";
	system("pause");
    return 23;
}

