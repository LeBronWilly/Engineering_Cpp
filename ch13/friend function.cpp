#include <iostream>
using namespace std;

class Bezaa; // Forward declaration of class Bezaa in order for example to compile.
class Aazaa
{
private:
    int a;
public:
    Aazaa() { a = 0; }
    void show(Aazaa& x, Bezaa& y);
    friend void show(Aazaa& x, Bezaa& y); // declaration of global friend
};

class Bezaa
{
private:
    int b;
public:

    Bezaa() { b = 6; }
    friend void show(Aazaa& x, Bezaa& y); // declaration of global friend
    friend void Aazaa::show(Aazaa& x, Bezaa& y); // declaration of friend from other class 
};

// Definition of a member function of Aazaa; this member is a friend of Bezaa
void Aazaa::show(Aazaa& x, Bezaa& y)
{
  cout << "Show via function member of Aazaa" << endl;
  cout << "Aazaa::a = " << x.a << endl;
  cout << "Bezaa::b = " << y.b << endl;
}

// Friend for Aazaa and Bezaa, definition of global function
void show(Aazaa& x, Bezaa& y)
{
  cout << "Show via global function" << endl;
  cout << "Aazaa::a = " << x.a << endl;
  cout << "Bezaa::b = " << y.b << endl;
}

int main()
{
   Aazaa a;
   Bezaa b;

   show(a,b);
   a.show(a,b);
}
