// prog8_18, �r���ƪ��m�� 
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main(void)
{
   string str4="LeBron23James";
   string str5="James13Harden";
   string str6="";
   
   cout << "str4=" << str4 << "  str5=" << str5 << "  str6=" << str6 << endl<< endl;
   
   cout << "����str6.assign(str5,5,8)" << endl;
   str6.assign(str5,5,8);
   cout << "str6=" << str6 << endl<< endl;
   
   cout << "����str4.at(2)" << endl;
   cout << str4.at(2)<< endl<< endl;
   
   cout << "����str6.erase(0,2)" << endl;
   str6.erase(0,2);
   cout << "str6=" << str6 << endl<< endl;
   
   cout << "����str5.find(str6)" << endl;
   cout << str5.find(str6) << endl<< endl;
   
   cout << "����str5.find(str6,9)" << endl;
   cout << str5.find(str6,9)<< endl<< endl;
   
   cout << "����str4.substr(6)" << endl;
   cout << str4.substr(6) << endl<< endl;
   
   cout << "����str4.substr(6,2)" << endl;
   cout << str4.substr(6,2) << endl<< endl;
   
   cout << "����str4.max_size()�Bstr5.max_size()�Bstr6.max_size()" << endl;
   cout << str4.max_size()<<"  "<< str5.max_size()<<"  "<< str6.max_size()<< endl<< endl;
   
   cout << "����str6.clear()" << endl;
   str6.clear();
   cout << "str6=" << str6 << endl<< endl;
   
   cout << "����str5.empty()�Bstr6.empty()" << endl;
   cout << str5.empty() << ((str5.empty()==1)?"(�Ŧr��)":"(�D�Ŧr��)") <<"  ";
   cout << str6.empty() << ((str6.empty()==1)?"(�Ŧr��)":"(�D�Ŧr��)") << endl<< endl;
   
   cout << "����str4.swap(str5)" << endl;
   str4.swap(str5);
   cout <<"str4="<< str4<<"  str5="<< str5 << endl<< endl;
   
   cout << "����str4.compare(str5)" << endl;
   cout << str4.compare(str5) << ((str4.compare(str5)<0)?
   "(ASCII str4<str5)":(str4.compare(str5)==0)?"(ASCII str4=str5)":"(ASCII str4>str5)") << endl<< endl;
   
   cout << "����str5.compare(str4)" << endl;
   cout << str5.compare(str4) << ((str5.compare(str4)<0)?
   "(ASCII str5<str4)":(str5.compare(str4)==0)?"(ASCII str5=str4)":"(ASCII str5>str4)") << endl<< endl;
   
   cout << "����str4.compare(0,5,str5,8,5)" << endl;
   cout << str4.compare(0,5,str5,8,5)<< (str4.compare(0,5,str5,8,5)==0?"(ASCII�۵�)":"(ASCII���۵�)") << endl<< endl;
   
   cout << "����str4.replace(5,2,str5)" << endl;
   str4.replace(5,2,str5);
   cout <<"str4="<< str4 << endl<< endl;
   
   cout << "����str6.append(str5)" << endl;
   str6.append(str5);   
   cout << "str6=" << str6 << endl<< endl;
   
   cout << "����str6.append(str4,18,6)" << endl;
   str6.append(str4,18,6);
   cout << "str6=" << str6 << endl<< endl;
   
   cout << "str4.length()=" << str4.length() << "  str5.length()=" << str5.length() << "  str6.length()=" 
   << str6.length() << endl<< endl;
   
   cout << "str4=" << str4 << "  str5=" << str5 << "  str6=" << str6 << endl<< endl;

   system("pause");
   return 0;
}
