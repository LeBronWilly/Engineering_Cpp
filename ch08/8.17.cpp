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

void show(int x,char abc[26]){
	if(x%2==0){
		for(int i=1;i<26;i+=2){
			cout<<abc[i]<<" ";
		}
	}else{
		for(int i=0;i<26;i+=2){
			cout<<abc[i]<<" ";
		}
	}
}
int main()
{
	srand(seed);
	LBJ king;
//	char a=75;
	char abc[26];
	int x;
//	cout<<a; // ��XK
	for(int i=0;i<26;i++){
		abc[i]=97+i;
		cout<<abc[i]<<" ";
	}
	cout<<"\n\nKey in a number�G";
	cin >> x;
	show(x,abc);
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "�� Coded by LeBron-Willy Fang ��\n\n";
	system("pause");
    return 23;
}

