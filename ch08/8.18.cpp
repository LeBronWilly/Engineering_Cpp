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

void reverse(char str[]){
	int i=0,j=0;
	while(str[i]!='\0'){
		i++;
	}
	for(j=i-1;j>=0;j--){ // i-1�H�h�������r��
		printf("%c",str[j]);
	}
	cout<<"\nstr��}="<<&str;
	printf("\n\n");
}


int main()
{
	srand(seed);
	LBJ king;
	char str[23];
	while(true){
		cout<<"Key in a string�G";
		cin.getline(str,23);
		cout<<"Reverse print�G";
		reverse(str);
	}
	
	
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "�� Coded by LeBron-Willy Fang ��\n\n";
	system("pause");
    return 23;
}

