#include <iostream>
#include <string>

using namespace std;

// 基类Teacher
class Teacher {
protected:
    string name;
    int age;
    string gender;
    string address;
    string phone;
    string title;  // 职称

public:
    Teacher(string n, int a, string g, string addr, string p, string t)
        : name(n), age(a), gender(g), address(addr), phone(p), title(t) {}

    void display() {
        cout << "姓名: " << name << endl;
        cout << "年龄: " << age << endl;
        cout << "性别: " << gender << endl;
        cout << "职称: " << title << endl;
        cout << "地址: " << address << endl;
        cout << "电话: " << phone << endl;
    }
};

// 基类Cadre（干部）
class Cadre {
protected:
    string name;
    int age;
    string gender;
    string address;
    string phone;
    string post;  // 职务

public:
    Cadre(string n, int a, string g, string addr, string p, string po)
        : name(n), age(a), gender(g), address(addr), phone(p), post(po) {}

    void display() {
        cout << "姓名: " << name << endl;
        cout << "年龄: " << age << endl;
        cout << "性别: " << gender << endl;
        cout << "职务: " << post << endl;
        cout << "地址: " << address << endl;
        cout << "电话: " << phone << endl;
    }
};

// 派生类Teacher_Cadre（教师兼干部）
class Teacher_Cadre : public Teacher, public Cadre {
private:
    double wages;  // 工资

public:
    Teacher_Cadre(string n, int a, string g, string addr, string p, string t, string po, double w)
        : Teacher(n, a, g, addr, p, t), Cadre(n, a, g, addr, p, po), wages(w) {}

    void show() {
        // 调用Teacher类中的display函数
        Teacher::display();
        // 输出职务与工资
        cout << "职务: " << Cadre::post << endl;
        cout << "工资: " << wages << endl;
    }
};

int main() {
    Teacher_Cadre teacher_cadre("张三", 40, "男", "西安市", "123456789", "教授", "党委书记", 8000.5);

    teacher_cadre.show();

    return 0;
}
