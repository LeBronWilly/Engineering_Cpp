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

void x(int a[][5]){
	int max=0,min=100,odd=0,even=0;
	for(int i=0;i<3;i++){
		for(int j=0;j<5;j++){
			if(a[i][j]>max){
				max=a[i][j];
			}
			if(a[i][j]<min){
				min=a[i][j];
			}
			if(a[i][j]%2==0){
				even+=1;
			}else{
				odd+=1;
			}
		}
	}
	cout<< "max=" << max << "  min=" << min<<"\n\n";
	cout<< "odd=" << odd << "  even=" << even<<"\n";
}
int main()
{
	srand(seed);
	LBJ king;
	int a[][5]={{33,32,56,45,33},
				{77,66,68,45,23},
				{43,55,43,67,65}};
	cout<<"a矩陣："<<endl; 
	for(int i=0;i<3;i++){
		for(int j=0;j<5;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<"\n";	
	x(a);
	
	
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "★ Coded by LeBron-Willy Fang ★\n\n";
	system("pause");
    return 23;
}

