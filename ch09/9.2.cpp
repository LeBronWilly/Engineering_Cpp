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


int main()
{
	srand(seed);
	LBJ king;
	short a=6;
	int b=23;
	double c=3.1415926;
	int64_t d=12345678;
	short *n1;
	int *n2;
	n1=&a;
	n2=&b;
//	int *n2=&b;
//	double *n3=&c;
//	int64_t *na=&d;
	cout<<"a = "<< a <<"  &a = " << &a <<"  sizeof(a) = "<<sizeof(a)<<"  sizeof(n1) = "<<sizeof(n1) << endl;
	cout<<"b = "<< b <<"  &b = " << &b <<"  sizeof(b) = "<<sizeof(b)<<"  sizeof(&b) = "<<sizeof(&b)<< endl;
	cout<<"c = "<< c <<"  &c = " << &c <<"  sizeof(c) = "<<sizeof(c)<<"  sizeof(&c) = "<<sizeof(&c)<< endl;
	cout<<"d = "<< d <<"  &d = " << &d <<"  sizeof(d) = "<<sizeof(d)<<"  sizeof(&d) = "<<sizeof(&d)<< endl<< endl;
	cout<<"&n2 = "<< &n2 <<"  n2 = " << n2 <<"  *n2 = "<<sizeof(*n2)<< endl;
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "�� Coded by LeBron-Willy Fang ��\n\n";
	system("pause");
    return 23;
}

