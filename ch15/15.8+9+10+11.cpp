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
	 double hour,min,sec;
	 
	 
	public:
	 double gethour(){
	 	return this->hour;
	 }
	 double getmin(){
	 	return this->min;
	 }
	 double getsec(){
	 	return this->sec;
	 }
	 
	 LBJ(double h=6 ,double m=13,double s=23.6):hour(h),min(m),sec(s)
	 {} // 預設建構元
	 
	 
	 void show_time(){
	 	cout << hour <<"hr "<<min << "min "<< sec << "sec"<<endl;
	 }
	  
	 void set_time(double h,double m,double s){
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
	 
	 LBJ operator+(LBJ &tt){
	 	double h,m,s;
	 	h=this->hour+tt.hour;
	 	m=this->min+tt.min;
	 	s=this->sec+tt.sec;
	 	if(s>=60.0){
	 		m+=floor(s/60.0);
	 		s-=60.0*floor(s/60.0);
		 }
		if(m>=60.0){
			h+=floor(m/60.0);
	 		m-=60.0*floor(m/60.0);
		}
		
	 	return LBJ(h,m,s);
	 }
	 
	 LBJ operator-(LBJ &tt){
	 	double h,m,s;
	 	h=this->hour-tt.hour;
	 	m=this->min-tt.min;
	 	s=this->sec-tt.sec;
	 	if(m<0.0){
			h+=floor(m/60.0);
	 		m-=60.0*floor(m/60.0);
		}
		if(s<0.0){
	 		m+=floor(s/60.0);
	 		s-=60.0*floor(s/60.0);
		}
		
	 	return LBJ(h,m,s);
	 }
	 
	 LBJ operator*(const float &n){
		double h,m,s;
	 	h=this->hour*n;
	 	m=this->min*n;
	 	s=this->sec*n;
	 	if(s>=60.0){
	 		m+=floor(s/60.0);
	 		s-=60.0*floor(s/60.0);
		 }
		if(m>=60.0){
			h+=floor(m/60.0);
	 		m-=60.0*floor(m/60.0);
		}
		
		return LBJ(h,m,s);
	}
	 
	 LBJ operator/(const float &n){
	 	double h,m,s;
	 	h=this->hour/n;
	 	m=this->min/n;
	 	s=this->sec/n;
		
	 	return LBJ(h,m,s);
	 }
	 
	 LBJ &operator=(const LBJ &tt){
	 	this->hour=tt.hour;
	 	this->min=tt.min;
	 	this->sec=tt.sec;
		
	 	return *this;
	 }
	 
	 
};

LBJ operator*(const float &n,LBJ &tt){
	double h,m,s;
	 	h=tt.gethour()*n;
	 	m=tt.getmin()*n;
	 	s=tt.getsec()*n;
	 	if(s>=60.0){
	 		m+=floor(s/60.0);
	 		s-=60.0*floor(s/60.0);
		 }
		if(m>=60.0){
			h+=floor(m/60.0);
	 		m-=60.0*floor(m/60.0);
		}
		
		return LBJ(h,m,s);
}


int main()
{
	srand(seed);
	LBJ t1(6,33,56.3);
	LBJ t2(5,30,30.3);
	LBJ t3; //(6,13,23.6)
	LBJ t4;
	LBJ t5;
	LBJ t6_1;
	LBJ t6_2;
	LBJ t7;
	
	t1.show_time();
	t2.show_time();
	t3.show_time();
	
	cout << endl << (t1<t2) << endl;
	cout << (t3<t2) << endl;
	cout << (t1>t3) << endl;
	cout << (t3>t2) << endl<< endl;
	
	t4=t1+t2;
	t4.show_time();
	
	t5=t2-t1;
	t5.show_time();
	
	t6_1=t1*3.0;
	t6_1.show_time();
	
	t6_2=3.0*t1;
	t6_2.show_time();
	
	t7=t2/7.0;
	t7.show_time();
	
	cout<<endl;
	
	t1=t2=t3;
	cout<<"使用t1=t2=t3"<<endl;
	t1.show_time();
	t2.show_time();
	t3.show_time();
	
	t4=t5;
	cout<<"使用t4=t5"<<endl;
	t4.show_time();
	t5.show_time();
	
	
	
	
	
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "★ Coded by LeBron-Willy Fang ★\n\n";
	system("pause");
    return 23;
}

