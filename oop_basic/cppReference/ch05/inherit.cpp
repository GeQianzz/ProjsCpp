#include <iostream>
using namespace std;

class Person{
private:
    int id;
    string name;
public:
    Person(){};
    Person(int id, string n): id(id), name(n){};
    void getValue();
    void display();
};

class Student:public Person{
private:
    int classNum;
    int grade;
public:
    Student(){};
    Student(int id, string n, int c, int g): Person(id, n){
        classNum = c;
        grade = g;
    }
    void getValueStudent();
    void displayStudent();
};


void Person::getValue(){
    cin >> id;
    cin >> name;
}

void Student::getValueStudent(){
    getValue();
    cin >> classNum;
    cin >> grade;
}

void Person::display(){
    cout << "id: " << id << endl;
    cout << "name: " << name << endl;
}

void Student::displayStudent(){ 
    display();
    cout << "classNum: " << classNum << endl;
    cout << "grade: " << grade << endl;
}

int main(){
    Student stu1(1, "geqian", 2203013, 100);
    // stu1.getValueStudent();
    stu1.displayStudent();

    return 0;
}