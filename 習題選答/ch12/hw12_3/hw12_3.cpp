// hw12_3,
#include <iostream>
#include <cstdlib>
using namespace std;
class my_data               //�ŧi�@my_data�����O
{
   public:                  //�ŧi��age,weight����������
      int age;
      int weight;
};

int main(void)
{
   my_data a;              //�ŧimy_data���O�ܼƬ�a
   a.age=18;               //�N���O�ܼ�a�̪�age��weight�]��
   a.weight=57;
   cout << "age= " << a.age << endl;     //�L�X���O�ܼ�age��weight����
   cout << "weight= " << a.weight << endl;
   system("pause");
   return 0;
}

/* output------
age= 18
weight= 57
-------------*/
