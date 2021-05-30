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
int64_t fib(int n){
	long long f_1=1,f_2=1,f=0;
	if(n>=3){
		for(int i=3;i<=n;i++){
			f=f_1+f_2;
			f_2=f_1;
			f_1=f;
			} 
		return f;
	}else{
		return 1;
	}
//	long long tem=0;
//	if (n==1 or n==2){
//		return 1;
//	}else if(n>=3){
//		for(int i=;)
//		
//		}
//	}
}
int main()
{
	time_t start,end;
	srand(seed);
	LBJ king;
	int n;
	cout <<"                 |        1       , n=1\n";
	cout <<"費氏數列：fib(n)=|        1       , n=2\n";
	cout <<"                 | fib(n-1)+f(n-2), n>=3\n";
	cout << "n=";
	cin>>n;
	start=time(NULL);
	cout << "fib("<< n << ")=" << fib(n)<<"\n"; 
	end=time(NULL);
	cout<<difftime(end,start)<<"seconds";
	
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "★ Coded by LeBron-Willy Fang ★\n\n";
	system("pause");
    return 23;
}

