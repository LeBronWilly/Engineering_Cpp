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
//	 int w
	 
	 
	public:
//	 int x;
	 
	 LBJ(){ // �w�]�غc��
//		x=23;
		
		
	 }
	 ~LBJ(){
	 }
	 
	 
	 
};


int main()
{
	srand(seed);
	LBJ king;
	char *ttt = new char[999];
	cout<<sizeof(king)<<endl;
	LBJ *ptr = new LBJ();
	cout<<sizeof(*ptr)<<endl;
	cout<<sizeof(ptr)<<endl;
	cout<<sizeof(ttt)<<endl;
	
	delete ptr;

	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "�� Coded by LeBron-Willy Fang ��\n\n";
	system("pause");
    return 23;
}

