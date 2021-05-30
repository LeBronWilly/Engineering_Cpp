// prog9_13, �ǻ���ƨ��L��Ƥ�
#include <iostream>
#include <cstdlib>
using namespace std;
double triangle(double,double),rectangle(double,double);
void showarea(double,double,double (*pf)(double,double));
int main(void)
{
   cout << "triangle(6,3.2)=";
   showarea(6,3.2,triangle);     // pf=&triangle(&�i�ٲ�)       // �I�striangle(),�æL�X���
   cout << "rectangle(4,6.1)=";
   showarea(4,6.1,rectangle);    // pf=&rectangle(&�i�ٲ�)      // �I�srectangle(),�æL�X���
   
   system("pause");
   return 0;
}

double triangle(double base,double height)     // �p��T���έ��n
{
   return (base*height/2);
}

double rectangle(double height,double width)   // �p�����έ��n
{
   return (height*width);
}

void showarea(double x,double y,double (*pf)(double,double))
{
   cout << (*pf)(x,y) << endl;
   return;
}
