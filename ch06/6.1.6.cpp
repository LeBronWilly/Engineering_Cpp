#include <iostream> // �ޤJ��ƿ�J�B��X�����Y
#include <cstdlib> // �зǨ�Ʈw
#include <fstream> // �Ψ�Ū���ɮ׸�ơA�]�i�N��Ƽg�J�ɮ��x�s
#include <cstring>
#include <ctime>
#include <iomanip>
#include <cstring> // �ΨӳB�z�r�ꪺ���O
#include <cmath>
#include <conio.h>
using namespace std; // �ŧistd�R�W�Ŷ�
unsigned int seed =(unsigned int)time(NULL); // �H�t�ήɶ���üƺؤlseed(�����ܼ�)
fstream file; // �ŧi�@��fstream(�ɮ׿�X�B��J)����
bool primeQ(int n){
	int c=0;
	for(int i=1;i<=n;i++){
		if(n%i==0){
			c+=1;
			if (c==1){
				cout<< n<< "���]�Ʀ��G" <<i;
			}else{
				cout<<"�B"<< i;
			}
			 
		}
	}
	if(c==2){
		cout<<endl<<n<<"����ơI\n\n";
		return true;
	}else if(n==1 or n==0){
		cout<<endl << n << "������Ƥ]�����X�ơI\n\n";
	}else{
		cout<<endl << n << "���X�ơI\n\n";
		return false;
	}
}

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
	static int n=0;
	while (true){
		cout<< "Key in a number�G";
		cin >> n;
		primeQ(n);
	}
	
	
	
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "�� Coded by LeBron-Willy Fang ��\n\n";
	system("pause");
    return 23;
}

