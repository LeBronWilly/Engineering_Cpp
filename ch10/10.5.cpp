#include <iostream> // �ޤJ��ƿ�J�B��X�����Y
#include <cstdlib> // �зǨ�Ʈw
#include <fstream> // �Ψ�Ū���ɮ׸�ơA�]�i�N��Ƽg�J�ɮ��x�s
#include <ctime> // �ɶ���Ʈw
#include <iomanip>
#include <cstring> // �ΨӳB�z�r�ꪺ���O
#include <cmath> // �ƾǨ�Ʈw
#include <conio.h>
#include <algorithm> // �t��k��Ʈw
#include <vector>
#include <iterator>
using namespace std; // �ŧistd�R�W�Ŷ�
unsigned int seed =(unsigned int)time(NULL); // �H�t�ήɶ���üƺؤlseed(�����ܼ�)
fstream file; // �ŧi�@��fstream(�ɮ׿�X�B��J)����

class LBJ{
	private:

	public:

		LBJ(){ // �w�]�غc

		}

};

char *str(char *text){
	char *ptr;
	ptr=new char[strlen(text+1)];
	strcpy(ptr,text);
	return ptr;
}

int main()
{
	srand(seed);
	LBJ king;
	char *a,*b,*temp;
	a=str("LeBron James");
	b=str("Kevin Durant");
	cout << "before swap..." << endl;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;

    temp=a;
    a=b;
    b=temp;

    cout << endl << "after swap..." << endl;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;

    delete[] a;
    delete[] b;
	
	
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "�� Coded by LeBron-Willy Fang ��\n\n";
	system("pause");
    return 23;
}

