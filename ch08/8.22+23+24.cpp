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
	string a,b;
	while (true){
		cout<<"Key in string a:";
		getline(cin,a);
		cout<<"Key in string b:";
		getline(cin,b);
		cout<<"length= "<<a.length() << "  " <<b.length()<<endl;
		cout<<a.compare(b)<<((a.compare(b)==0)?" ��r��ۦP":" ��r�ꤣ�P")<<endl;
		cout << int(a.find("the"));
		if (int(a.find("the"))>=0){
			cout<< " \"the\"���string a��" << int(a.find("the"))+1 << "��m"<<endl;
		}else{
			cout<< " string a�䤣��\"the\""<<endl;
		}
		cout << int(b.find("the"));
		if (int(b.find("the"))>=0){
			cout<< " \"the\"���string b��" << int(b.find("the"))+1 << "��m"<<endl;
		}else{
			cout<< " string b�䤣��\"the\""<<endl;
		}
		cout<<"\n\n";
	
	}
	
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "�� Coded by LeBron-Willy Fang ��\n\n";
	system("pause");
    return 23;
}

