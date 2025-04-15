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
    Complex operator+ (Complex &c2);
    Complex operator- (Complex &c2);
};

void Complex::show(){
    cout << "(" << real << ", " << imag << "i)" << endl;
}

Complex Complex::operator+ (Complex &c2){
    Complex c;
    c.real = real + c2.real;
    c.imag = imag + c2.imag;
    return c;
}

Complex Complex::operator- (Complex &c2){
    Complex c;
    c.real = real - c2.real;
    c.imag = imag - c2.imag;
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
