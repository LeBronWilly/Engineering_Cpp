#include <iostream> // �ޤJ��ƿ�J�B��X�����Y
#include <cstdlib> // �зǨ�Ʈw
#include <fstream> // �Ψ�Ū���ɮ׸�ơA�]�i�N��Ƽg�J�ɮ��x�s
#include <ctime>
#include <iomanip>
#include <cstring> // �ΨӳB�z�r�ꪺ���O
#include <cmath>
#include <conio.h>
using namespace std; // �ŧistd�R�W�Ŷ�
unsigned int seed =(unsigned int)time(NULL); // �H�t�ήɶ���üƺؤlseed(�����ܼ�)
fstream file; // �ŧi�@��fstream(�ɮ׿�X�B��J)����

class LBJ{
	private:

	public:

		LBJ(){ // �w�]�غc

		}

};

void x(int a[][5]){
	int max=0,min=100,odd=0,even=0;
	for(int i=0;i<3;i++){
		for(int j=0;j<5;j++){
			if(a[i][j]>max){
				max=a[i][j];
			}
			if(a[i][j]<min){
				min=a[i][j];
			}
			if(a[i][j]%2==0){
				even+=1;
			}else{
				odd+=1;
			}
		}
	}
	cout<< "max=" << max << "  min=" << min<<"\n\n";
	cout<< "odd=" << odd << "  even=" << even<<"\n";
}
int main()
{
	srand(seed);
	LBJ king;
	int a[][5]={{33,32,56,45,33},
				{77,66,68,45,23},
				{43,55,43,67,65}};
	cout<<"a�x�}�G"<<endl; 
	for(int i=0;i<3;i++){
		for(int j=0;j<5;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<"\n";	
	x(a);
	
	
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "�� Coded by LeBron-Willy Fang ��\n\n";
	system("pause");
    return 23;
}

