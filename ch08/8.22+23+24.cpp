#include <iostream> // 引入資料輸入、輸出的標頭
#include <cstdlib> // 標準函數庫
#include <fstream> // 用來讀取檔案資料，也可將資料寫入檔案儲存
#include <ctime>
#include <iomanip>
#include <cstring> // 用來處理字串的類別
#include <cmath> // 數學函數庫
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
	string a,b;
	while (true){
		cout<<"Key in string a:";
		getline(cin,a);
		cout<<"Key in string b:";
		getline(cin,b);
		cout<<"length= "<<a.length() << "  " <<b.length()<<endl;
		cout<<a.compare(b)<<((a.compare(b)==0)?" 兩字串相同":" 兩字串不同")<<endl;
		cout << int(a.find("the"));
		if (int(a.find("the"))>=0){
			cout<< " \"the\"位於string a第" << int(a.find("the"))+1 << "位置"<<endl;
		}else{
			cout<< " string a找不到\"the\""<<endl;
		}
		cout << int(b.find("the"));
		if (int(b.find("the"))>=0){
			cout<< " \"the\"位於string b第" << int(b.find("the"))+1 << "位置"<<endl;
		}else{
			cout<< " string b找不到\"the\""<<endl;
		}
		cout<<"\n\n";
	
	}
	
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "★ Coded by LeBron-Willy Fang ★\n\n";
	system("pause");
    return 23;
}

