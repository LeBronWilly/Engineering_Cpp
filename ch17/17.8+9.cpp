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

class CMath{
	private:
//	 int w  
	 /*cl3cl3l3ff*/
	 
	public:
//	 int x
	 
//	 CMath(){ // 預設建構元
//		
//		
//		
//	 }
	 void show(){
	 	cout << "ans = "<< compute() <<endl;
	 }
	 
	 virtual int compute()=0;
	 
};

class Cadd : public CMath{
	public:
		int n1,n2;
		
		Cadd(int m,int n):n1(m),n2(n){}
		
		virtual int compute(){
			return n1+n2;
		}
		void show(){
	 		cout << "add(x,y) = "<< compute() <<endl;
	 	}
};

int main()
{
	srand(seed);
	Cadd a1(2,6);
	a1.show();
	
	
	
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "★ Coded by LeBron-Willy Fang ★\n\n";
	system("pause");
    return 23;
}

