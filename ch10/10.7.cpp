#include <iostream> // �ޤJ��ƿ�J�B��X�����Y
#include <cstdlib> // �зǨ�Ʈw
#include <fstream> // �Ψ�Ū���ɮ׸�ơA�]�i�N��Ƽg�J�ɮ��x�s
#include <ctime> // �ɶ���Ʈw
#include <iomanip>
#include <cstring> // �ΨӳB�z�r�ꪺ���O
#include <cmath> // �ƾǨ�Ʈw
#include <conio.h>
#include <algorithm> // �t��k��Ʈw
#include <vector>
#include <iterator>
using namespace std; // �ŧistd�R�W�Ŷ�
unsigned int seed =(unsigned int)time(NULL); // �H�t�ήɶ���üƺؤlseed(�����ܼ�)
fstream file; // �ŧi�@��fstream(�ɮ׿�X�B��J)����

class LBJ{
	private:

	public:

		LBJ(){ // �w�]�غc

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
    int temp[10][50] = {0}; // 10���T�w(�O��0~9)�A50�h���ƦC�h��M�w(�O���Ӽ�) 
 	int count[10] = {0};
    /* ��ƱƧǪ��覡�i�H�ĥ�LSD�]Least sgnificant digital�^��MSD�]Most sgnificant digital�^�A
	LSD���ƧǤ覡����Ȫ��̥k��}�l�A��MSD�h�ۤϡA����Ȫ��̥���}�l�C */
    int n = 1,c=0; // �����ھڭӦ�ƪ��ƭȡA�b���X�ƭȮɱN���̤��t�ܽs��0��9��temp��l��
//    while(n <= 100) { // �̾ڼƦC�̤j��ư����
    while(n <= pow(10,d)) { // �̾ڼƦC�̤j��ư����(�|�h�]�@��) 
        int i;
        for(i = 0; i < nsize ; i++) { 
            int lsd = (int(data[i] / n) % 10); // ���X�Ӧ�� / ���X�Q��� / ���X�ʦ��
            temp[lsd][count[lsd]] = data[i]; // temp[�Ӧ��][�O��] / temp[�Q���][�O��] / temp[�ʦ��][�O��]
            count[lsd]++; // �O���Ӽ�+1 
        } 
        // ���s�ƦC
        int k = 0;
        for(i = 0; i < 10; i++) { 
            if (count[i] != 0)  {
                for(int j = 0; j < count[i]; j++, k++) { 
                    data[k] = temp[i][j]; // i�O�Ӧ�ơBj�O�O�� / i�O�Q��ơBj�O�O�� / i�O�ʦ�ơBj�O�O�� 
                }
            }
            count[i] = 0; 
        } 
        n *= 10; // �A�i��@�����t�A�o���O�ھڤQ��ƨӤ��t / �A�i��@�����t�A�o���O�ھڦʦ�ƨӤ��t
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
    cout << "�� Coded by LeBron-Willy Fang ��\n\n";
	system("pause");
    return 23;
}

