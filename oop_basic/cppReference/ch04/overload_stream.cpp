#include <iostream>
using namespace std;

class Complex{
private:
    double real;
    double imag;
public:
    Complex():real(0), imag(0){};
    Complex(double r, double i):real(r), imag(i){};
    friend Complex operator+ (Complex, Complex);
    friend ostream& operator<< (ostream&, Complex&);
    friend istream& operator>> (istream&, Complex&);
};

Complex operator+ (Complex c1, Complex c2){
    return Complex(c1.real+c2.real, c1.imag+c2.imag);
}

ostream& operator<< (ostream& output, Complex& c){
    if(c.imag > 0) 
        output << c.real << "+"<< c.imag << "i" << endl;
    else if(c.imag == 0)
        output << c.real << endl;
    else 
        output << c.real << c.imag << "i" << endl;
    return output;
}

istream& operator>> (istream& input, Complex& c){
    cout << "input: " << endl;
    input >> c.real >> c.imag;
    return input;
}

int main(){
    Complex c;
    cout << c;
    cin >> c;
    cout << c;
    return 0;
}