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

class LBJ
{
	private:

	public:

		LBJ(){ // �w�]�غc

		}

};


int main()
{
	srand(seed);
	LBJ king;
	double a[10],b,*c;
	cout<<"b��} = "<<&b<<"\n"; 
	for(int i=0;i<10;i++)
	{
		cout<<"a["<<i <<"]��} = "<<(a+i)<<"\n"; 
	}
	 
	cout<<"��}�t��(a+0)-(&b) = "<<(a+0)-(&b);
	cout<<" ("<<(a+0)-(&b)<<"�Ƥ��j)"<<"\n";
	cout<<"��}�t��(a+4)-(&b) = "<<(a+4)-(&b);
	cout<<" ("<<(a+4)-(&b)<<"�Ƥ��j)";
	
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "�� Coded by LeBron-Willy Fang ��\n\n";
	system("pause");
    return 23;
}

