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


int main()
{
	srand(seed);
	LBJ king;
	string name[]={"Kobe","LeBron James","KD35","JimmyBucket","PG 13"};
	int s[5]={85,100,78,95,70};
	for(int i=0;i<5;i++){
		cout<<name[i]<<"�G";
		cin>>s[i];
	}
	cout<<"\n\n"; 
	for(int i=0;i<5;i++){
		cout<<name[i]<<"  ";
	}
	cout<<"\n";
	for(int i=0;i<5;i++){
		cout<<setw(name[i].length())<<s[i]<<"  ";	
	}
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "�� Coded by LeBron-Willy Fang ��\n\n";
	system("pause");
    return 23;
}

