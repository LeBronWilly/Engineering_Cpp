#include <iostream> // �ޤJ��ƿ�J�B��X�����Y
#include <cstdlib> // �зǨ�Ʈw
#include <fstream> // �Ψ�Ū���ɮ׸�ơA�]�i�N��Ƽg�J�ɮ��x�s
#include <ctime> // �ɶ���Ʈw
#include <iomanip>
#include <cstring> // �ΨӳB�z�r�ꪺ���O
#include <cmath> // �ƾǨ�Ʈw
#include <conio.h>
#include <algorithm> // �t��k��Ʈw
using namespace std; // �ŧistd�R�W�Ŷ�
unsigned int seed =(unsigned int)time(NULL); // �H�t�ήɶ���üƺؤlseed(�����ܼ�)
fstream file; // �ŧi�@��fstream(�ɮ׿�X�B��J)����

class LBJ{
	private:

	public:

		LBJ(){ // �w�]�غc

		}

};

void display(char *a,int n){
	cout<<(a+n)<<"\n";
	
	for(int i=n;i<strlen(a);i++){
		cout<<*(a+i);
	}
	cout<<"\n";
}

void show(char *ptr){
	int i;
	for(i=0;i<24;i++){
		if ((*(ptr+i)>='A') && (*(ptr+i)<='Z')){
			*(ptr+i)+=32;
		}else if((*(ptr+i)>='a') && (*(ptr+i)<='z')){
			*(ptr+i)-=32;
		}else if(*(ptr+i)==' '){
			*(ptr+i)='*';
		}else if (*(ptr+i)=='\0'){
			break;
		}
		cout<<*(ptr+i);
	}
	
}

int main()
{
	srand(seed);
	LBJ king;
//	char *a="LeBron James is The King";
	char a[30]="LeBron James is The King";
	int n=4;
	cout<<"Key in a str�G";
	cin.getline(a,30);
	cout<<"Key in a num�G";
	cin >> n;
	display(a,n);
	show(a);
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "�� Coded by LeBron-Willy Fang ��\n\n";
	system("pause");
    return 23;
}

