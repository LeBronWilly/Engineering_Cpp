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

int main()
{
	srand(seed);
	LBJ king;
	int a[][5]={{33,32,56,45,33},
				{77,66,68,45,23},
				{43,55,43,67,65}};
	int maxSales[3];
	int maxProduct[3];
	int i,j,b,max=0,min,sum=0;
	
	for(i=0;i<3;i++){
		for(j=0;j<5;j++){
			sum+=a[i][j];
		}
		maxSales[i]=sum;
		sum=0;
		cout<<"�P���"<<i+1<<"���~�Z�G"<< maxSales[i]<<"\n";
		if(maxSales[i]>max){
			max=maxSales[i];
			b=i;
		} 
		if(maxSales[i]<min) min=maxSales[i];
	}
	cout<<"�~�Z�̦n�G�P���"<< b+1<<"\n\n";
	
	max=0,min=100;
	for(i=0;i<5;i++){
		for(j=0;j<3;j++){
			sum+=a[j][i];
		}
		maxProduct[i]=sum;
		sum=0;
		cout<<"���~"<<i+1<<"���P�B�G"<< maxProduct[i]<<"\n";
		if(maxProduct[i]>max){
			max=maxProduct[i];
			b=i;
		} 
		if(maxProduct[i]<min) min=maxProduct[i];
	}
	cout<<"�P�B�̦n�G���~"<< b+1;

	
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "�� Coded by LeBron-Willy Fang ��\n\n";
	system("pause");
    return 23;
}

