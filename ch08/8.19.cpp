#include <iostream> // �ޤJ��ƿ�J�B��X�����Y
#include <cstdlib> // �зǨ�Ʈw
#include <fstream> // �Ψ�Ū���ɮ׸�ơA�]�i�N��Ƽg�J�ɮ��x�s
#include <ctime>
#include <iomanip>
#include <cstring> // �ΨӳB�z�r�ꪺ���O
#include <cmath> // �ƾǨ�Ʈw
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

void show(string str){
	int A=0,E=0,I=0,O=0,U=0,space=0,num=0,others=0;
	for(int i=0;i<str.length();i++){
		switch (str[i]){
		case 'A' :
		case 'a': A+=1;
		break;
		case 'E' :
		case 'e': E+=1;
		break;
		case 'I' :
		case 'i': I+=1;
		break;
		case 'O' :
		case 'o': O+=1;
		break;
		case 'U' :
		case 'u': U+=1;
		break;
		case ' ': space+=1;
		break;
		case '0': 
		case '1': 
		case '2': 
		case '3': 
		case '4': 
		case '5': 
		case '6': 
		case '7': 
		case '8': 
		case '9': num+=1;
		break;
		default: others+=1;
		break;
		}
	}
	cout<< "\nstring�G"<<str<<"\n";
	cout<<"A/a:"<<A<<"  E/e:"<<E <<"  I/i:"<<I<< "  O/o:"<<O<< "  U/u:"<<U
	<<"  �Ů�:"<< space << "  �Ʀr:" << num << "  ��L�r��:"<<others <<"\n\n" ;
} 
int main()
{
	srand(seed);
	LBJ king;
	string str;
	while(true){
		cout<< "Key in a string�G";
		getline(cin,str);
		show(str);
	}
	
	
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "�� Coded by LeBron-Willy Fang ��\n\n";
	system("pause");
    return 23;
}

