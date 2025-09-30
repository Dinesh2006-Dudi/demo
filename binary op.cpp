#include <iostream>
using namespace std;

class binary {
public:
    int a, b, c;
    binary()
    {
    	
	}

    binary(int x, int y, int z) {
        a = x;
        b = y;
        c = z;
    }


    void display() {
        cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
    }
    friend binary operator+(const binary &obj1,const binary &obj2)
};
binary operator+(const binary& obj) {
        return binary(a+ obj1.a, b + obj.b, c + obj.c);

int main() {
    binary ob1(10, 20, 30);
    binary ob2(5, 15, 25);
    binary ob3;
    ob3 = ob1 + ob2; 
    ob3.display();

    return 0;
}
