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
	int a[][5]={{33,32,56,45,33},
				{77,66,68,45,23},
				{43,55,43,67,65}};
	int maxSales[3];
	int maxProduct[3];
	int i,j,b,max=0,min,sum=0;
	
	for(i=0;i<3;i++){
		for(j=0;j<5;j++){
			sum+=a[i][j];
		}
		maxSales[i]=sum;
		sum=0;
		cout<<"銷售員"<<i+1<<"的業績："<< maxSales[i]<<"\n";
		if(maxSales[i]>max){
			max=maxSales[i];
			b=i;
		} 
		if(maxSales[i]<min) min=maxSales[i];
	}
	cout<<"業績最好：銷售員"<< b+1<<"\n\n";
	
	max=0,min=100;
	for(i=0;i<5;i++){
		for(j=0;j<3;j++){
			sum+=a[j][i];
		}
		maxProduct[i]=sum;
		sum=0;
		cout<<"產品"<<i+1<<"的銷額："<< maxProduct[i]<<"\n";
		if(maxProduct[i]>max){
			max=maxProduct[i];
			b=i;
		} 
		if(maxProduct[i]<min) min=maxProduct[i];
	}
	cout<<"銷額最好：產品"<< b+1;

	
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "★ Coded by LeBron-Willy Fang ★\n\n";
	system("pause");
    return 23;
}

