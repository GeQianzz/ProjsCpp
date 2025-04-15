#include <iostream>
using namespace std;

class Complex {
private:
    double real;  // 实部
    double imag;  // 虚部

public:
    // 构造函数
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

    // 重载加法运算符
    Complex operator+(const Complex& other) {
        return Complex(real + other.real, imag + other.imag);
    }

    // 重载减法运算符
    Complex operator-(const Complex& other) {
        return Complex(real - other.real, imag - other.imag);
    }

    // 重载乘法运算符
    Complex operator*(const Complex& other) {
        double r = real * other.real - imag * other.imag;
        double i = real * other.imag + imag * other.real;
        return Complex(r, i);
    }

    // 重载除法运算符
    Complex operator/(const Complex& other) {
        double denominator = other.real * other.real + other.imag * other.imag;
        double r = (real * other.real + imag * other.imag) / denominator;
        double i = (imag * other.real - real * other.imag) / denominator;
        return Complex(r, i);
    }

    // 输出复数
    void display() const {
        cout << real;
        if (imag >= 0) cout << " + " << imag << "i" << endl;
        else cout << " - " << -imag << "i" << endl;
    }
};

int main() {
    int realPartX, realPartY;
    int imagePartX, imagePartY;
    cout << "Please type in Two Complex Numbers" << endl;
    cin >> realPartX >> imagePartX;
    cin >> realPartY >> imagePartY;
    
    Complex num1(realPartX, imagePartX);  // 3 + 4i
    Complex num2(realPartY, imagePartY);  // 1 + 2i


    Complex sum = num1 + num2;       // 求和
    Complex diff = num1 - num2;      // 求差
    Complex prod = num1 * num2;      // 求积
    Complex quot = num1 / num2;      // 求商

    cout << "Sum: ";
    sum.display();

    cout << "Difference: ";
    diff.display();

    cout << "Product: ";
    prod.display();

    cout << "Quotient: ";
    quot.display();

    return 0;
}
