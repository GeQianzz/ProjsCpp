#include <iostream>
using namespace std;

class Complex{
private:
    double real;
    double imag;
public:
    Complex(): real(0), imag(0){};
    Complex(double r, double i): real(r), imag(i){};
    void show();
    friend Complex operator+ (Complex &c1, Complex &c2);
    friend Complex operator- (Complex &c1, Complex &c2);
};

void Complex::show(){
    cout << "(" << real << ", " << imag << "i)" << endl;
}

Complex operator+ (Complex &c1, Complex &c2){
    Complex c;
    c.real = c1.real + c2.real;
    c.imag = c1.imag + c2.imag;
    return c;
}

Complex operator- (Complex &c1, Complex &c2){
    Complex c;
    c.real = c1.real - c2.real;
    c.imag = c1.imag - c2.imag;
    return c;
}

int main(){
    Complex c1(3, 4);
    Complex c2(5, 6);
    c1.show();
    c2.show();

    Complex c3 = c1 + c2;
    c3.show();

    Complex c4 = c1 - c2;
    c4.show();
    return 0;
}