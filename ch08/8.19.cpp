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

void show(string str){
	int A=0,E=0,I=0,O=0,U=0,space=0,num=0,others=0;
	for(int i=0;i<str.length();i++){
		switch (str[i]){
		case 'A' :
		case 'a': A+=1;
		break;
		case 'E' :
		case 'e': E+=1;
		break;
		case 'I' :
		case 'i': I+=1;
		break;
		case 'O' :
		case 'o': O+=1;
		break;
		case 'U' :
		case 'u': U+=1;
		break;
		case ' ': space+=1;
		break;
		case '0': 
		case '1': 
		case '2': 
		case '3': 
		case '4': 
		case '5': 
		case '6': 
		case '7': 
		case '8': 
		case '9': num+=1;
		break;
		default: others+=1;
		break;
		}
	}
	cout<< "\nstring："<<str<<"\n";
	cout<<"A/a:"<<A<<"  E/e:"<<E <<"  I/i:"<<I<< "  O/o:"<<O<< "  U/u:"<<U
	<<"  空格:"<< space << "  數字:" << num << "  其他字元:"<<others <<"\n\n" ;
} 
int main()
{
	srand(seed);
	LBJ king;
	string str;
	while(true){
		cout<< "Key in a string：";
		getline(cin,str);
		show(str);
	}
	
	
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "★ Coded by LeBron-Willy Fang ★\n\n";
	system("pause");
    return 23;
}

