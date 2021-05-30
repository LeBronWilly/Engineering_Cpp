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

class Caaa{
	private:
	 
	 
	 
	public:
	 int num1,num2;
	 
	 Caaa(int a,int b):num1(a),num2(b){ // 預設建構元
		
	 }
	 
	 Caaa():num1(1),num2(1){ // 預設建構元
		
	 }
	 void show(){
			cout<<num1<< " "<< num2<<" from Caaa"<<endl; 
	 }
	 void display(){
	 	printf("Caaa  Printed from Caaa\n");
	 }
	 
};

class Cbbb: public Caaa{
	
	public:
		void set_num(int x, int y){
			num1=x;
			num2=y;
		}
		void show(){
			cout<<num1<< " "<< num2<<" from Cbbb"<<endl; 
		}
		Cbbb(int x,int y):Caaa(x,y){
		}
		Cbbb():Caaa(){
		}
		void display(){
	 		printf("Cbbb  Printed from Cbbb\n");
		}
};


int main()
{
	srand(seed);
	Cbbb obj;
	
	Caaa obj1;
	Caaa obj2(10,15);
	
	Cbbb obj3;
	Cbbb obj4;
	Cbbb obj5(6,23);
	
	
	obj.show();
	obj.set_num(23,6);
	obj.show();
	
	
	cout << "\n\n";
	obj1.show();
	obj2.show();
	
	cout << "\n\n";
	obj3.show();
	obj4.show();
	obj5.show();
	
	cout << "\n\n";
	obj1.display();
	obj3.display();
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "★ Coded by LeBron-Willy Fang ★\n\n";
	system("pause");
    return 23;
}

