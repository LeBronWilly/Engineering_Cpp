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

void square(float *arr){
	for(int i=0;i<5;i++){
		*(arr+i)=pow(*(arr+i),2);
		cout<<arr[i]<<" ";
	} 
}

/*
�ۦW���ƧǺt��kMerge-Sort�Ĩ�divide-and-counquer����
divide-and-counquer�D�n�����T�ӨB�J�i��
1.Divide: �N����D�����Y�z�Ӥl���D
2.Conquer: ���j�ѦU�Ӥl���D�A��l���D��size���p�ɪ�����(���j���l����)
3.Combine: �N�l���D���ѦX�֦�����D����

��Merge-Sort�Ĩ�divide-and-counquer�������B�J�p�U
1.Data list �@�C���Φ��ⵥ��
2.���ksublist�U��sort in merge sort
3.�X�֥��k�b�����runs���@��run
��:run�O���w�ƧǦn�����q��C
*/
void Merge(float *A, int front, int mid, int end) { 
	/*
	Let L[0...n1] and R[0...n2] be new arrays
	and copy A[p...m] to L[0...n1] 
	and copy A[m+1...q] to R[0...n2] 
	*/
//	 ��array[front]~array[mid]��i LeftSub[]
//     ��array[mid+1]~array[end]��i RightSub[]
//    vector<float> LeftSub(A.begin +front, A.begin()+mid+1), 
//				RightSub(A.begin()+mid+1, A.begin()+end+1);
//    LeftSub.insert(LeftSub.end(), 999999);      // �bLeftSub[]���ݥ[�J�Ȭ� Max ������
//    RightSub.insert(RightSub.end(), 999999);    // �bRightSub[]���ݥ[�J�Ȭ� Max ������
	int n1 = mid - front + 1;
	int n2 = end - mid;
	int* LeftSub = new int[n1];  
	int* RightSub = new int[n2];
	for (int i = 0; i < n1; i++) {
		LeftSub[i] = A[front+i]; // �e�b 
	}
	for (int i = 0; i < n2; i++) {
		RightSub[i] = A[i+mid+1]; // ��b 
	}
	LeftSub[n1] = 999999999.999;
	RightSub[n2] = 999999999.999; // �b��ӷs�x�}���̫�@�Ӧ�m�A�s�W�@�ӵ����Ȭ��u�L���j�v�������A�o�Ӫ������O���F�u����v�ΡC 
	
	int idxLeft = 0, idxRight = 0;
	for (int i = front; i <= end; i++) { // ���۫K�}�l�u�����ӯx�}�������v�A�D��u���p�������v��i��x�}A���C 
		if (LeftSub[idxLeft] <= RightSub[idxRight]) {
			A[i] = LeftSub[idxLeft];
			idxLeft++;  
		}else{
			A[i] = RightSub[idxRight];
			idxRight++;
		}
	}
}

void MergeSort(float *A, int front, int end) { // front�Pend���x�}�d��
	if (front < end) { // ��ܥثe���x�}�d��O���Ī�
		int mid = (front + end) / 2; // mid�Y�O�N�x�}��b����index�Aint�|�L����˥h 
		MergeSort(A, front, mid);  // �H���j�覡�A�~��divide�x�}���e�b�qsubarray
		MergeSort(A, mid+1, end);  // �H���j�覡�A�~��divide�x�}����b�qsubarray
		Merge(A, front, mid, end);  // �N���subarray�����, �æX�֥X�Ƨǫ᪺�x�}
	}
}



int main()
{
	srand(seed);
	LBJ king;
	float arr[5];
	for(int i=0;i<5;i++){
		cout<<"key in number" <<i<<"�G";
		cin>>arr[i]; 
	}
	cout<<"\n\n��larray�G";
	for(int i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}
	MergeSort(arr, 0, 4);
	cout<<"\n�Ƨǫ�array�G";
	for(int i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\n�����array�G";
	square(arr);

	
	
    cout << "\n\nLeBron James, MVP forlakers!!\n";
    cout << "�� Coded by LeBron-Willy Fang ��\n\n";
	system("pause");
    return 23;
}

