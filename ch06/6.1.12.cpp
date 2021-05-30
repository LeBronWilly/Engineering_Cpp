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

class LBJ{
	private:

	public:

		LBJ(){ // 預設建構

		}

};
double f(double x){
	return 3*pow(x,3)+2*x-1;
}
//float power(float x,int n)
//{
//   float p=1.0f;
//   for(int i=0;i<n;i++)
//      p*=x;
//   return p;
//}
int main()
{
	srand(seed);
	LBJ king;
	double x;
	cout<<"f(x)=3x^3 + 2x - 1，x=";
	cin>> x;
	cout<< "f("<< x <<")=" <<f(x);
	
	
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "★ Coded by LeBron-Willy Fang ★\n\n";
	system("pause");
    return 23;
}

