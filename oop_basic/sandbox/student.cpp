#include <iostream>
#include <string.h>
using namespace std;

class Student{
public:
    Student(char s, string nam): sex(s), name(nam) {
        id++;
    };
    ~Student(){
        cout << "ends " << id << endl;
        id--;
    };
    void print_info();
private:
    static int id;
    char sex;
    string name;
};

int Student::id = 1000;

void Student::print_info(){
    cout << "info" << endl;
    cout << "id = " << id << endl;
    cout << "sex = " << sex << endl;
    cout << "name = " << name << endl;
}

int main(){

    Student stu1('m', "Wang");
    Student stu2('m', "Wang");
    stu1.print_info();
    stu2.print_info();

    return 0;
}