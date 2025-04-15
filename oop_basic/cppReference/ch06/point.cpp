#include <iostream>
using namespace std;

// Point: Base Class
class Point{
public:
    Point(float x = 0, float y = 0): x(x), y(y){};
    void display(){ cout << x << ", " << y << endl;}
    float getX() const {return x;}
    float getY() const {return y;}
    friend ostream& operator<< (ostream&, Point&);
private:
    float x;
    float y;
};

ostream& operator<< (ostream& output, Point& p){
    output << "(" << p.x << ", " << p.y << ")" << endl;
    return output;
}



// Circle
class Circle:public Point{
public:
    Circle(){};
    Circle(float x, float y, float r):Point(x,y), r(r){};
    float getRadius(){return r;}
    void display(){
        Point::display();
        cout << r << endl;
    }
    friend ostream& operator<< (ostream&, Circle&);
private:
    float r;
};

ostream& operator<< (ostream& output, Circle& c){
    output << "point: " << "(" << c.getX() << ", " << c.getY() << ")" << endl;
    output << "radius: " << c.r << endl;
    return output;
}





// Cylinder
class Cylinder:public Circle{
public:
    Cylinder(){};
    Cylinder(float x, float y, float r, float h):Circle(x,y,r), h(h){};
    void display(){
        Circle::display();
        cout << h << endl;
    }
    friend ostream& operator<< (ostream&, Circle&);
private:
    float h;
};


// main()
int main(){
    Point p(1, 2);
    cout << p << endl;
    
    Circle c(1, 2, 3.5);
    cout << c << endl; 

    Cylinder cylin(1.0, 2.0, 3.0, 5.5);
    cout << cylin << endl;

    return 0;
}