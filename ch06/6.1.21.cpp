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
float fact(float x,int n){
	if (n>0){
		float tem=1;
		for(int i=1;i<=n;i++){
			tem=tem*i;
		}
		return pow(x,n)/tem+fact(x,n-1);
	}else{
		return 1;
	}
}

//int fact(int a)		// 自訂函數fact()，計算a!
//{
//   if(a>0)
//      return (a*fact(a-1));
//   else
//      return 1;
//}

//double power(double x,int n)
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
	int n;
	float x;
	cout << "x=";
	cin >> x;
	cout << "n=";
	cin >> n;
	cout << "n/3=" << (float)n/3 <<"\n";
	cout << "x^0/0! + x^1/1! + x^2/2! ..... + x^n/n! = "<< fact(abs(x),abs(n));
	
//   	double sum=0.0;
//   	for(int k=1;k<=10;k++)
//  	    sum+=power(0.1,k)/(fact(k));
//  	cout << "sum=" << sum << endl;	
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "★ Coded by LeBron-Willy Fang ★\n\n";
	system("pause");
    return 23;
}

