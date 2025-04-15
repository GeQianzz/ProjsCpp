#include <iostream>
using namespace std;

class Person{
private:
    string name;
    int age;
    string gender;
    string address;
    string phoneNum;
public:
    Person(){};
    Person(string n, int a, string g, string add, string p):
        name(n), age(a), gender(g), address(add), phoneNum(p){};
    void display();
};

class Teacher:public Person{
private:
    string title;
public:
    Teacher(){};
    Teacher(string n, int a, string g, string add, string p, string t):
        Person(n, a, g, add, p) {title = t;}
    void display();
};

class Cadre:public Person{
private:
    string post;
public:
    Cadre(){};
    Cadre(string n, int a, string g, string add, string p, string po):
        Person(n, a, g, add, p) {post = po;}
    void display();
};

class Teacher_Cadre:public Teacher, public Cadre{
private:
    float wages;
public:
    Teacher_Cadre(){};
    Teacher_Cadre(string n, int a, string g, string add, string p, string t, float w):
        Teacher(n, a, g, add, p, t){ wages = w; };
    void display();
};

void Person::display(){
    cout << "name:\t" << name << endl;
    cout << "age:\t" << age << endl;
    cout << "gender:\t" << gender << endl;
    cout << "address:\t" << address << endl;
    cout << "phoneNum:\t" << phoneNum << endl;
}

void Teacher::display(){
    Person::display();
    cout << "title:\t" << title << endl;
}

void Teacher_Cadre::display(){
    Teacher::display();
    cout << "wages:\t" << wages << endl;
}

int main(){
    Teacher_Cadre t1("Li", 38, "female", "40040Road", "15012345678", "teacher", 14200.57);
    Teacher t2("Wang", 68, "male", "40040Road", "13912345678", "professor");

    Teacher *p = &t1;
    p -> display();
    p = &t2;
    p -> display();

    // t1.display();
    // cout << endl;
    // t2.display();

    return 0;
}