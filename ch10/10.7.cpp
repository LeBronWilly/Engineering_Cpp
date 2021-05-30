#include <iostream> // ま戈块块夹繷
#include <cstdlib> // 夹非ㄧ计畐
#include <fstream> // ノㄓ弄郎戈盢戈糶郎纗
#include <ctime> // 丁ㄧ计畐
#include <iomanip>
#include <cstring> // ノㄓ矪瞶﹃摸
#include <cmath> // 计厩ㄧ计畐
#include <conio.h>
#include <algorithm> // 簍衡猭ㄧ计畐
#include <vector>
#include <iterator>
using namespace std; // std㏑丁
unsigned int seed =(unsigned int)time(NULL); // ╰参丁讽睹计贺seed(办跑计)
fstream file; // fstream(郎块块)ン

class LBJ{
	private:

	public:

		LBJ(){ // 箇砞篶

		}

};

int MaxBit(int *data, int nsize){
    int max = data[0];
    for (int i = 1; i < nsize; i++){
        if (max < data[i])
            max = data[i];
    }
    int d = 1,p = 10;
    while (max >= p){
        //p *= 10; // Maybe overflow
        max /= 10;
        d++;
    }
    return d;
} 


void RadixSort(int *data, int nsize, int d) {
    int temp[10][50] = {0}; // 10㏕﹚(癘魁0~9)50玥跌计硅∕﹚(癘魁计) 
 	int count[10] = {0};
    /* 膀计逼よΑ蹦ノLSDLeast sgnificant digital┪MSDMost sgnificant digital
	LSD逼よΑパ龄程娩秨﹍τMSD玥はパ龄程オ娩秨﹍ */
    int n = 1,c=0; // 沮计计ǐ砐计盢ウだ皌絪腹09temp表い
//    while(n <= 100) { // ㄌ沮计程计暗笆
    while(n <= pow(10,d)) { // ㄌ沮计程计暗笆(穦禲Ω) 
        int i;
        for(i = 0; i < nsize ; i++) { 
            int lsd = (int(data[i] / n) % 10); // 计 / 计 / κ计
            temp[lsd][count[lsd]] = data[i]; // temp[计][癘计] / temp[计][癘计] / temp[κ计][癘计]
            count[lsd]++; // 癘魁计+1 
        } 
        // 穝逼
        int k = 0;
        for(i = 0; i < 10; i++) { 
            if (count[i] != 0)  {
                for(int j = 0; j < count[i]; j++, k++) { 
                    data[k] = temp[i][j]; // i琌计j琌癘计 / i琌计j琌癘计 / i琌κ计j琌癘计 
                }
            }
            count[i] = 0; 
        } 
        n *= 10; // 秈︽Ωだ皌硂Ω琌沮计ㄓだ皌 / 秈︽Ωだ皌硂Ω琌沮κ计ㄓだ皌
        c++;
    }
//	cout<< d<<endl;
//	cout<< c<<endl;
//	cout<< pow(10,d)<<endl;
//	cout<< pow(10,d-1)<<endl;   
}


int main()
{
	srand(seed);
	LBJ king;
	int a[]={23,21,9,4,1,240,240,130,111,2434533,2553,31,100,31,33451,31,31,31,100,31,51,91};
	cout <<"Maxbit = " << MaxBit(a,sizeof(a)/sizeof(a[0])) <<endl;
	RadixSort(a, sizeof(a)/sizeof(a[0]), MaxBit(a,sizeof(a)/sizeof(a[0])));
	cout <<"sizeof(a)/sizeof(a[0]) = " << sizeof(a)/sizeof(a[0]) <<endl;
	for(int i = 0; i < sizeof(a)/sizeof(a[0]); i++) 
//        printf("%d ", a[i]);
		cout<< a[i] <<" ";
	
	
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "」 Coded by LeBron-Willy Fang 」\n\n";
	system("pause");
    return 23;
}

