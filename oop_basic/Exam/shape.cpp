#include <iostream>
using namespace std;

class Shape{
public:
    virtual double area()=0;
};

class Circle:public Shape{
private:
    double radius;
public:
    Circle(){};
    Circle(double r):radius(r){};
    void setValue(double r){
        radius = r;
    }
    void showValue(){
        cout << "radius = " << radius << endl;
    }
    double area(){
        return 3.14 * radius * radius;
    }
};

class Square:public Shape{
private:
    double a;
public:
    Square(){};
    Square(double x):a(x){};
    void setValue(double x){
        a = x;
    }
    void showValue(){
        cout << "length = " << a << endl;
    }
    double area(){
        return a * a;
    }
};


double total(Shape *s[ ], int n) { 
    double sum=0.0;
    for(int i=0; i<n; i++)	sum+=s[i]->area();
	return sum; 
}

int main(){
    // Circle c(9.9);
    // c.showValue();
    // c.setValue(10.9);
    // c.showValue();
    // cout << c.area() << endl;

    // Square s(5);
    // s.showValue();
    // s.setValue(10);
    // s.showValue();
    // cout << s.area() << endl;


    Circle c(5.5);
    Square s(9.9);
    Shape* shapes[] = {&c, &s};

    double areaSum = total(shapes, 2);
    cout << c.area() << endl;
    cout << s.area() << endl;

    cout << areaSum;


    return 0;
}
