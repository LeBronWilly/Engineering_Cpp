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
	float a[100],sum, max=0.0,min=100.0;
	int i;
	for(i=0;i<100;i++){
		cout<<"Key in the Number"<<i+1<<"(0~100)�G";
		cin>>a[i];
		if (a[i]<0 or a[i]>100){
			cout << "Total has " << i <<" numbers"<<"\n";
			break;
		}
		sum+=a[i];
		cout<<"a[" <<i<<"]="<<a[i]<<"\n"; 
	}
	for(int j=0;j<i;j++){
		if(a[j]>max){
			max=a[j];
		}
		if(a[j]<min){
			min=a[j];
		}
	}
	cout<<"\n"<<"Max="<<max<<"  Min="<<min<<"  Avg="<<float(sum/i);
	
	
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "�� Coded by LeBron-Willy Fang ��\n\n";
	system("pause");
    return 23;
}

