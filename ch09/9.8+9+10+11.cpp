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

void inch(float *n){
	cout << *n << "cm = "<< 0.394*(*n)<<"inch\n\n";
//	*n=0.394*(*n);
//	cout << *n;
	return;
}

float *gallon(float *m){
	*m=0.264*(*m);
	return m;
}

float *min(float *n){
	float *x = n;
	for(int i=0;i<4;i++){
		if (*x>*(n+i)){
			x=n+i;
		}
	}
	return x;
}

float max(float *n){
	float *y = n;
	for(int i=0;i<4;i++){
		if (*y<*(n+i)){
			y=n+i;
		}
	}
	return *y;
}

void show_max(float *n,float (*pf)(float *)){
	cout<< "Max = " << (*pf)(n)<<"\n\n";
}
/*
直接插入排序（Insertion Sort），是一種簡單直觀的排序演算法。它的工作原理是通過構建有序序列，
對未排序的數據，在已排序序列中從後向前掃描，找到相應位置並插入。
### 插入排序演算法的一般步驟：
1.從第一個元素開始，該元素可以認為已被排序；
2.取出下一個元素，在已經排序的元素序列中從後向前掃描；
3.如果該元素（已排序）大於新元素，將該元素移到下一個位置；
4.重復步驟3，直到找到已排序的元素小於或者等於新元素的位置；
5.將新元素插入到該位置後，重復步驟2~步驟35
*/
void InsertionSort(float *n, int len)
{
	for (int j=1; j<len; j++)
	{
		int key = n[j]; // 設定鍵值(從第2個值(index=1)開始往後設定，直到最後) 
		int i = j-1;
		while (i>=0 && n[i]>key) // 若前面的數大於鍵值的話 
		{
			n[i+1] = n[i]; // 前面的數將往後移一格  
			i--;
		}
		n[i+1] = key;
	}
	cout<<"InsertionSort: ";
	for(int i=0;i<len;i++)
	{
		cout << *(n+i)<<" ";
	}
	cout<<"\n\n==========================\n\n";
	return;
}


int main()
{
	srand(seed);
	LBJ king;
	float a,b;
	float n[4],*ptr;
	while (true){
		cout <<"Key in a cm:";
		cin >> a;
		inch(&a);
		
		cout <<"Key in a liter:";
		cin >> b;
		cout<< b<<"liter = " << *gallon(&b) << "gallon"<<"\n\n";
		
		cout<<"Key in 4 numbers:";
		cin>> n[0]>>n[1]>>n[2]>>n[3];
		ptr=min(n);
		cout<< "Min = " << *ptr<<"\n";
		show_max(n,max);
		InsertionSort(n,sizeof(n)/sizeof(*(n+0)));
	} 
	
	
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "★ Coded by LeBron-Willy Fang ★\n\n";
	system("pause");
    return 23;
}

