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
	int sum=0;
	wchar_t a[5][20];
	for(int i=0;i<5;i++){
		wcout<<"key in str"<<i<<":";
		wcin.getline(a[i],20);
	}
	wcout<<"\n\n";
	for(int i=0;i<5;i++){
		wcout<<"length str"<<i<<"="<<wcslen(a[i])<<"\n";
		sum+=wcslen(a[i]);
	}
	wcout<<"Total="<<sum<<"\n";

	
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "�� Coded by LeBron-Willy Fang ��\n\n";
	system("pause");
    return 23;
}

