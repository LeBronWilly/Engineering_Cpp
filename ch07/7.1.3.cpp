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

int gcd(int &x, int &y, int &z) { //迴圈方式(使用傳參考) 
    while(y != 0) { 
        z = x % y; 
        x = y; 
        y = z; 
    } 
    z=x;
    return z;
}

int gcd( int x, int y ) //遞迴方式(使用傳值) 
{
    if( y==0 )
        return x;
    return gcd( y, x%y );
}


int lcm(int x, int y, int z) {
    return x * y / gcd(x, y, z);
}

int main(void) { 
    int a, b,g; 
    while (true){
    	printf("輸入兩數："); 
    	scanf("%d %d", &a, &b); 
    	if(a==0 or b==0){
    		cout<<"北七？數值不能有0！\n\n";
    		continue;
		}
   		printf("GCD：%d\nLCM：%d\n", gcd(a, b, g), lcm(a, b, g));
    	cout<<"g(傳參考)="<<g<<"\n\n";
	}
    
    

	
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "★ Coded by LeBron-Willy Fang ★\n\n";
	system("pause");
    return 23;
}

