#include <iostream> // 引入資料輸入、輸出的標頭
#include <cstdlib> // 標準函數庫
#include <fstream> // 用來讀取檔案資料，也可將資料寫入檔案儲存
#include <ctime> // 時間函數庫
#include <iomanip>
#include <cstring> // 用來處理字串的類別
#include <cmath> // 數學函數庫
#include <conio.h>
#include <algorithm> // 演算法函數庫
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
	short a=6;
	int b=23;
	double c=3.1415926;
	int64_t d=12345678;
	short *n1;
	int *n2;
	n1=&a;
	n2=&b;
//	int *n2=&b;
//	double *n3=&c;
//	int64_t *na=&d;
	cout<<"a = "<< a <<"  &a = " << &a <<"  sizeof(a) = "<<sizeof(a)<<"  sizeof(n1) = "<<sizeof(n1) << endl;
	cout<<"b = "<< b <<"  &b = " << &b <<"  sizeof(b) = "<<sizeof(b)<<"  sizeof(&b) = "<<sizeof(&b)<< endl;
	cout<<"c = "<< c <<"  &c = " << &c <<"  sizeof(c) = "<<sizeof(c)<<"  sizeof(&c) = "<<sizeof(&c)<< endl;
	cout<<"d = "<< d <<"  &d = " << &d <<"  sizeof(d) = "<<sizeof(d)<<"  sizeof(&d) = "<<sizeof(&d)<< endl<< endl;
	cout<<"&n2 = "<< &n2 <<"  n2 = " << n2 <<"  *n2 = "<<sizeof(*n2)<< endl;
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "★ Coded by LeBron-Willy Fang ★\n\n";
	system("pause");
    return 23;
}

