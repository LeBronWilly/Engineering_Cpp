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

void square(float *arr){
	for(int i=0;i<5;i++){
		*(arr+i)=pow(*(arr+i),2);
		cout<<arr[i]<<" ";
	} 
}

/*
著名的排序演算法Merge-Sort採取divide-and-counquer策略
divide-and-counquer主要分成三個步驟進行
1.Divide: 將原問題分成若干個子問題
2.Conquer: 遞迴解各個子問題，當子問題的size夠小時直接解(遞迴到初始條件)
3.Combine: 將子問題的解合併成原問題的解

而Merge-Sort採取divide-and-counquer策略的步驟如下
1.Data list 一列切割成兩等分
2.左右sublist各自sort in merge sort
3.合併左右半部兩個runs成一個run
註:run是指已排序好的片段串列
*/
void Merge(float *A, int front, int mid, int end) { 
	/*
	Let L[0...n1] and R[0...n2] be new arrays
	and copy A[p...m] to L[0...n1] 
	and copy A[m+1...q] to R[0...n2] 
	*/
//	 把array[front]~array[mid]放進 LeftSub[]
//     把array[mid+1]~array[end]放進 RightSub[]
//    vector<float> LeftSub(A.begin +front, A.begin()+mid+1), 
//				RightSub(A.begin()+mid+1, A.begin()+end+1);
//    LeftSub.insert(LeftSub.end(), 999999);      // 在LeftSub[]尾端加入值為 Max 的元素
//    RightSub.insert(RightSub.end(), 999999);    // 在RightSub[]尾端加入值為 Max 的元素
	int n1 = mid - front + 1;
	int n2 = end - mid;
	int* LeftSub = new int[n1];  
	int* RightSub = new int[n2];
	for (int i = 0; i < n1; i++) {
		LeftSub[i] = A[front+i]; // 前半 
	}
	for (int i = 0; i < n2; i++) {
		RightSub[i] = A[i+mid+1]; // 後半 
	}
	LeftSub[n1] = 999999999.999;
	RightSub[n2] = 999999999.999; // 在兩個新矩陣的最後一個位置，新增一個虛擬值為「無限大」的元素，這個的元素是為了「比較」用。 
	
	int idxLeft = 0, idxRight = 0;
	for (int i = front; i <= end; i++) { // 接著便開始「比較兩個矩陣的元素」，挑選「較小的元素」放進原矩陣A中。 
		if (LeftSub[idxLeft] <= RightSub[idxRight]) {
			A[i] = LeftSub[idxLeft];
			idxLeft++;  
		}else{
			A[i] = RightSub[idxRight];
			idxRight++;
		}
	}
}

void MergeSort(float *A, int front, int end) { // front與end為矩陣範圍
	if (front < end) { // 表示目前的矩陣範圍是有效的
		int mid = (front + end) / 2; // mid即是將矩陣對半分的index，int會無條件捨去 
		MergeSort(A, front, mid);  // 以遞迴方式，繼續divide矩陣的前半段subarray
		MergeSort(A, mid+1, end);  // 以遞迴方式，繼續divide矩陣的後半段subarray
		Merge(A, front, mid, end);  // 將兩個subarray做比較, 並合併出排序後的矩陣
	}
}



int main()
{
	srand(seed);
	LBJ king;
	float arr[5];
	for(int i=0;i<5;i++){
		cout<<"key in number" <<i<<"：";
		cin>>arr[i]; 
	}
	cout<<"\n\n原始array：";
	for(int i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}
	MergeSort(arr, 0, 4);
	cout<<"\n排序後array：";
	for(int i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\n平方後array：";
	square(arr);

	
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "★ Coded by LeBron-Willy Fang ★\n\n";
	system("pause");
    return 23;
}

