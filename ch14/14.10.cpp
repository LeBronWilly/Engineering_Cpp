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
	 int total;
	 int *ptr;	 
	 
	public:

	 
	 LBJ(int num=6){ // �غc��
		total=num;
		ptr=new int[total];
		for(int i=0;i<total;i++){
			*(ptr+i)=3*i+6;
		}
		
	 }
	 
	 void show(){
	 	for(int i=0;i<total;i++){
	 		cout<< *(ptr+i) <<"\t";
		 }
		cout<<"\n\n";
	 }
	 
	 friend void show(LBJ *ki){
	 	for(int i=0;i<ki->total;i++){
	 		cout<< *(ki->ptr+i) <<"\t";
		 }
		cout<<"\n\n";
	 }
	 
	 LBJ(const LBJ &k){
	 	total = k.total;
	 	ptr=new int[total];
		for(int i=0;i<total;i++){
			*(ptr+i)=3*i+6;
		}
	 }
	 
	 ~LBJ(){
	 	delete [] ptr;
	 }
	 
	 
	 
};


int main()
{
	srand(seed);
	LBJ king;
	LBJ king2(king);
	LBJ *king3 = new LBJ(king2);
	LBJ *king4 = new LBJ(*king3);
	
	cout<<"�⦸king.show()�G\n\n";
	king.show();
	king.show();
	
	cout<<"\n�⦸king2.show()�G\n\n";
	king2.show();
	king2.show();
	
	cout<<"\n�⦸king3->show()�G\n\n";
	king3->show();
	king3->show();
	
	cout<<"\n�⦸show(king3)�G\n\n";
	show(king3);
	show(king3);
	
	cout<<"\n�⦸king4->show()�G\n\n";
	king4->show();
	king4->show();
	
	cout<<"\n�⦸show(king4)�G\n\n";
	show(king4);
	show(king4);
	
	delete king3;
	delete king4;
	
	
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "�� Coded by LeBron-Willy Fang ��\n\n";
	system("pause");
    return 23;
}

