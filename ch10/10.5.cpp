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

char *str(char *text){
	char *ptr;
	ptr=new char[strlen(text+1)];
	strcpy(ptr,text);
	return ptr;
}

int main()
{
	srand(seed);
	LBJ king;
	char *a,*b,*temp;
	a=str("LeBron James");
	b=str("Kevin Durant");
	cout << "before swap..." << endl;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;

    temp=a;
    a=b;
    b=temp;

    cout << endl << "after swap..." << endl;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;

    delete[] a;
    delete[] b;
	
	
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "★ Coded by LeBron-Willy Fang ★\n\n";
	system("pause");
    return 23;
}

