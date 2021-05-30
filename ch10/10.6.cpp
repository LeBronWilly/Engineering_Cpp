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
	int *a=new int[3],*b=new int[3],*c=new int[3];
	int max=300,min=100;
	for(int i=0;i<3;i++){
		/* 產生 [min , max] 的整數亂數 */
  		*(a+i) = rand() % (max - min + 1) + min;
		*(b+i) = rand() % (max - min + 1) + min;
		cout<<"a["<<i<<"]="<<*(a+i)<<"\t"<<"b["<<i<<"]="<<*(b+i)<<endl;
		*(c+i)=*(a+i)+*(b+i);
	}
	cout<<endl;
	delete[] a;
	delete[] b;
	for(int i=0;i<3;i++){
		cout<<"c["<<i<<"]="<<*(c+i)<<endl;
	}
	delete[] c;
	
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "★ Coded by LeBron-Willy Fang ★\n\n";
	system("pause");
    return 23;
}

