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
double trapezoid(int u,int b,int h){
	return (u+b)*h/2.0;
}
double trapezoid(double u,double b,double h){
	return (u+b)*h/2.0;
}
int main()
{
	srand(seed);
	LBJ king;
	int a,b,c;
	double d,e,f;
	cout<<"��J��ΤW���B�U���B��(��ƫ��A)�G"; 
	cin>>a>>b>>c;
	cout<<"��J��ΤW���B�U���B��(�B�I���A)�G"; 
	cin>>d>>e>>f;
	printf("��ƭ��n=%f\n",trapezoid(a,b,c));
	printf("�B�I���n=%f",trapezoid(d,e,f));
	
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "�� Coded by LeBron-Willy Fang ��\n\n";
	system("pause");
    return 23;
}

