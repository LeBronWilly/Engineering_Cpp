#include <iostream> // �ޤJ��ƿ�J�B��X�����Y
#include <cstdlib> // �зǨ�Ʈw
#include <fstream> // �Ψ�Ū���ɮ׸�ơA�]�i�N��Ƽg�J�ɮ��x�s
#include <ctime>
#include <iomanip>
#include <cstring> // �ΨӳB�z�r�ꪺ���O
#include <cmath>
#include <conio.h>
#include <algorithm>  
using namespace std; // �ŧistd�R�W�Ŷ�
unsigned int seed =(unsigned int)time(NULL); // �H�t�ήɶ���üƺؤlseed(�����ܼ�)
fstream file; // �ŧi�@��fstream(�ɮ׿�X�B��J)����

class LBJ{
	private:

	public:

		LBJ(){ // �w�]�غc

		}

};

//void reverse(wstring str){
//	for(int j=str.length()-1;j>=0;j--){
//		printf("%c",str[j]);
//	}
//	printf("\n\n");
//}


int main()
{
	srand(seed);
	LBJ king;
	wstring str;
	while(true){
		cout<<"Key in a string�G";
		getline(wcin,str);
		cout<<"Reverse print�G";
//		reverse(str);
		reverse(str.rbegin(),str.rend());  
  		wcout<<str<<endl<<"\n";  
	}
	
	
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "�� Coded by LeBron-Willy Fang ��\n\n";
	system("pause");
    return 23;
}

