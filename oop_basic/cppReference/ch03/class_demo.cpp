#include <iostream>
using namespace std;

class Student {
    public:
        void display();

    private:
        int id;
        string name;
        char sex;
};

void Student::display() {
    cout << "id: " << id << endl;
    cout << "name: " << name << endl;
    cout << "sex: " << sex << endl;
}

int main() {
    Student stu1, stu2;
    cout << sizeof(Student) << endl;
    cout << sizeof(stu1) << endl;
    cout << sizeof(int) + sizeof(string) + sizeof(char) << endl;

    return 0;
}
