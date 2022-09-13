#include <iostream>
using namespace std;

class A{
public:
    void show(){
        cout << "Hello from A \n";
    }
};
class B : public A{
};
class C : public A{
};
class D : public B, public C{
};
void main(){
	D object;
    object.show();//error: ambiguous access of 'show'
}