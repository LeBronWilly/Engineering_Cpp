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
float power(float x,int n){
	float sum=0;
	for(int i=1;i<=n;i++){
		sum+=1/pow(x,i);
	}
	return sum;
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
	float x;
	int n;
	cout<<"Number(n)：";
	cin>>x;
	cout << "Power(次方)(x)：";
	cin >> n;
	cout<<"1/n + 1/n^2 + 1/^3 +...+ 1/n^x = "<<power(x,n);
	
	
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "★ Coded by LeBron-Willy Fang ★\n\n";
	system("pause");
    return 23;
}

