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
	 int total;
	 int *ptr;	 
	 
	public:

	 
	 LBJ(int num=6){ // 建構元
		total=num;
		ptr=new int[total];
		for(int i=0;i<total;i++){
			*(ptr+i)=3*i+6;
		}
		
	 }
	 
	 void show(){
	 	for(int i=0;i<total;i++){
	 		cout<< *(ptr+i) <<"\t";
		 }
		cout<<"\n\n";
	 }
	 
	 friend void show(LBJ *ki){
	 	for(int i=0;i<ki->total;i++){
	 		cout<< *(ki->ptr+i) <<"\t";
		 }
		cout<<"\n\n";
	 }
	 
	 LBJ(const LBJ &k){
	 	total = k.total;
	 	ptr=new int[total];
		for(int i=0;i<total;i++){
			*(ptr+i)=3*i+6;
		}
	 }
	 
	 ~LBJ(){
	 	delete [] ptr;
	 }
	 
	 
	 
};


int main()
{
	srand(seed);
	LBJ king;
	LBJ king2(king);
	LBJ *king3 = new LBJ(king2);
	LBJ *king4 = new LBJ(*king3);
	
	cout<<"兩次king.show()：\n\n";
	king.show();
	king.show();
	
	cout<<"\n兩次king2.show()：\n\n";
	king2.show();
	king2.show();
	
	cout<<"\n兩次king3->show()：\n\n";
	king3->show();
	king3->show();
	
	cout<<"\n兩次show(king3)：\n\n";
	show(king3);
	show(king3);
	
	cout<<"\n兩次king4->show()：\n\n";
	king4->show();
	king4->show();
	
	cout<<"\n兩次show(king4)：\n\n";
	show(king4);
	show(king4);
	
	delete king3;
	delete king4;
	
	
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "★ Coded by LeBron-Willy Fang ★\n\n";
	system("pause");
    return 23;
}

