// prog7_18, ㏑ま计ㄏノ
#include <iostream>
#include <cstdlib>
using namespace std;
int main(int argc, char *argv[]) //ま计计籔ま计(int┪char...) 
{
   int i ;
   cout << "The value of argc is " << argc;  // ㏑ま计ず甧
   cout << endl;
   for(i=0;i<argc;i++){
   	if(i==0){
	   cout << "argv[" << i << "]=" << argv[i] << "(磅︽郎嘿﹃0)" << endl;
	   }else{
	   cout << "argv[" << i << "]=" << argv[i] << "(ま计﹃"<< i <<")" << endl;
	   }
   }
   cout << "﹃羆计" << argc<< "\n";  
   system("pause");
   return 0;
}
