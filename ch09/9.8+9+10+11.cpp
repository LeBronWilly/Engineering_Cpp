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

void inch(float *n){
	cout << *n << "cm = "<< 0.394*(*n)<<"inch\n\n";
//	*n=0.394*(*n);
//	cout << *n;
	return;
}

float *gallon(float *m){
	*m=0.264*(*m);
	return m;
}

float *min(float *n){
	float *x = n;
	for(int i=0;i<4;i++){
		if (*x>*(n+i)){
			x=n+i;
		}
	}
	return x;
}

float max(float *n){
	float *y = n;
	for(int i=0;i<4;i++){
		if (*y<*(n+i)){
			y=n+i;
		}
	}
	return *y;
}

void show_max(float *n,float (*pf)(float *)){
	cout<< "Max = " << (*pf)(n)<<"\n\n";
}
/*
�������J�Ƨǡ]Insertion Sort�^�A�O�@��²�檽�[���ƧǺt��k�C�����u�@��z�O�q�L�c�ئ��ǧǦC�A
�良�ƧǪ��ƾڡA�b�w�ƧǧǦC���q��V�e���y�A��������m�ô��J�C
### ���J�ƧǺt��k���@��B�J�G
1.�q�Ĥ@�Ӥ����}�l�A�Ӥ����i�H�{���w�Q�ƧǡF
2.���X�U�@�Ӥ����A�b�w�g�ƧǪ������ǦC���q��V�e���y�F
3.�p�G�Ӥ����]�w�Ƨǡ^�j��s�����A�N�Ӥ�������U�@�Ӧ�m�F
4.���_�B�J3�A������w�ƧǪ������p��Ϊ̵���s��������m�F
5.�N�s�������J��Ӧ�m��A���_�B�J2~�B�J35
*/
void InsertionSort(float *n, int len)
{
	for (int j=1; j<len; j++)
	{
		int key = n[j]; // �]�w���(�q��2�ӭ�(index=1)�}�l����]�w�A����̫�) 
		int i = j-1;
		while (i>=0 && n[i]>key) // �Y�e�����Ƥj����Ȫ��� 
		{
			n[i+1] = n[i]; // �e�����ƱN���Ჾ�@��  
			i--;
		}
		n[i+1] = key;
	}
	cout<<"InsertionSort: ";
	for(int i=0;i<len;i++)
	{
		cout << *(n+i)<<" ";
	}
	cout<<"\n\n==========================\n\n";
	return;
}


int main()
{
	srand(seed);
	LBJ king;
	float a,b;
	float n[4],*ptr;
	while (true){
		cout <<"Key in a cm:";
		cin >> a;
		inch(&a);
		
		cout <<"Key in a liter:";
		cin >> b;
		cout<< b<<"liter = " << *gallon(&b) << "gallon"<<"\n\n";
		
		cout<<"Key in 4 numbers:";
		cin>> n[0]>>n[1]>>n[2]>>n[3];
		ptr=min(n);
		cout<< "Min = " << *ptr<<"\n";
		show_max(n,max);
		InsertionSort(n,sizeof(n)/sizeof(*(n+0)));
	} 
	
	
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "�� Coded by LeBron-Willy Fang ��\n\n";
	system("pause");
    return 23;
}

