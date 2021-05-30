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
	 int hour,min;
	 double sec;
	 
	 
	public:
	 
	 
	 LBJ(int h=6 ,int m=13,double s=23.6):hour(h),min(m),sec(s)
	 { // 預設建構元
		
		
		
	 }
	 
	 void show_time(){
	 	cout << hour <<"hr "<<min << "min "<< sec << "sec"<<endl;
	 }
	  
	 void set_time(int h,int m,double s){
	 	this->hour=h;
	 	this->min=m;
	 	this->sec=s;
	 }
	 
	 double total_sec(){
	 	return this->hour*60*60 + this->min*60 + this->sec;
	 }
	 
	 int operator>(LBJ &tt){
	 	return (this->total_sec()>tt.total_sec());
	 }
	 
	 int operator<(LBJ &tt){
	 	return (this->total_sec()<tt.total_sec());
	 }
	 
	 
	 
};


int main()
{
	srand(seed);
	LBJ t1(4,23,56.3);
	LBJ t2(5,45,30.3);
	LBJ t3; //(6,13,23.6)
	
	t1.show_time();
	t2.show_time();
	t3.show_time();
	
	cout << (t1<t2) << endl;
	cout << (t3<t2) << endl;
	cout << (t1>t3) << endl;
	cout << (t3>t2) << endl;
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "★ Coded by LeBron-Willy Fang ★\n\n";
	system("pause");
    return 23;
}

