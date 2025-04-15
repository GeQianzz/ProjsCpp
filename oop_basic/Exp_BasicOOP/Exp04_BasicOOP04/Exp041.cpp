#include <iostream>
#include <string>
using namespace std;

// Person类，作为学生和教师的基类
class Person {
protected:
    int id;         // 编号
    string name;    // 姓名

public:
    // 构造函数
    Person(int id = 0, string name = "") : id(id), name(name) {}

    // 输入数据
    virtual void input() {
        cout << "请输入编号: ";
        cin >> id;
        cout << "请输入姓名: ";
        cin >> name;
    }

    // 显示数据
    virtual void display() const {
        cout << "编号: " << id << ", 姓名: " << name << endl;
    }
};

// Student类，继承自Person类
class Student : public Person {
private:
    string class_num; // 班号
    float score;      // 成绩

public:
    // 构造函数
    Student(int id = 0, string name = "", string class_num = "", float score = 0.0)
        : Person(id, name), class_num(class_num), score(score) {}

    // 输入学生数据
    void input() override {
        Person::input();  // 调用基类的输入方法
        cout << "请输入班号: ";
        cin >> class_num;
        cout << "请输入成绩: ";
        cin >> score;
    }

    // 显示学生数据
    void display() const override {
        Person::display();  // 调用基类的显示方法
        cout << "班号: " << class_num << ", 成绩: " << score << endl;
    }
};

// Teacher类，继承自Person类
class Teacher : public Person {
private:
    string title;  // 职称
    string department; // 部门

public:
    // 构造函数
    Teacher(int id = 0, string name = "", string title = "", string department = "")
        : Person(id, name), title(title), department(department) {}

    // 输入教师数据
    void input() override {
        Person::input();  // 调用基类的输入方法
        cout << "请输入职称: ";
        cin >> title;
        cout << "请输入部门: ";
        cin >> department;
    }

    // 显示教师数据
    void display() const override {
        Person::display();  // 调用基类的显示方法
        cout << "职称: " << title << ", 部门: " << department << endl;
    }
};


int main() {
    // 创建学生对象并输入、显示数据
    Student student;
    cout << "请输入学生信息:" << endl;
    student.input();
    cout << "学生信息:" << endl;
    student.display();

    // 创建教师对象并输入、显示数据
    Teacher teacher;
    cout << "\n请输入教师信息:" << endl;
    teacher.input();
    cout << "教师信息:" << endl;
    teacher.display();

    return 0;
}
