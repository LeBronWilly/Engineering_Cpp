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

int main()
{
	srand(seed);
	LBJ king;
	float a[100],sum, max=0.0,min=100.0;
	int i;
	for(i=0;i<100;i++){
		cout<<"Key in the Number"<<i+1<<"(0~100)：";
		cin>>a[i];
		if (a[i]<0 or a[i]>100){
			cout << "Total has " << i <<" numbers"<<"\n";
			break;
		}
		sum+=a[i];
		cout<<"a[" <<i<<"]="<<a[i]<<"\n"; 
	}
	for(int j=0;j<i;j++){
		if(a[j]>max){
			max=a[j];
		}
		if(a[j]<min){
			min=a[j];
		}
	}
	cout<<"\n"<<"Max="<<max<<"  Min="<<min<<"  Avg="<<float(sum/i);
	
	
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "★ Coded by LeBron-Willy Fang ★\n\n";
	system("pause");
    return 23;
}

