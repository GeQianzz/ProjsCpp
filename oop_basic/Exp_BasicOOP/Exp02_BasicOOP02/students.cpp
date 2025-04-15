#include <iostream>
#include <cstring>
using namespace std;

class Student {
private:
    char name[19];  // 姓名，长度为18加上结束符
    int num;        // 学号
    int mathScore;  // 数学成绩
    int englishScore; // 英语成绩

    static int count;            // 学生人数
    static int mathTotalScore;   // 数学总成绩
    static int englishTotalScore; // 英语总成绩

public:
    // 构造函数
    Student(const char* nm, int nu, int math, int english) {
        strncpy(name, nm, 18);
        name[18] = '\0'; // 确保字符串以'\0'结束
        num = nu;
        mathScore = math;
        englishScore = english;

        count++;
        mathTotalScore += mathScore;
        englishTotalScore += englishScore;
    }

    // 显示基本数据函数
    void ShowBase() const {
        cout << "Name: " << name << endl;
        cout << "Id: " << num  << endl;
        cout << "Math Score: " << mathScore << endl;
        cout << "English Score: " << englishScore << endl << endl;
    }

    // 显示静态数据函数
    static void showStatic() {
        cout << "Student Counts: " << count << endl;
        cout << "Math Total Score: " << mathTotalScore << endl;
        cout << "English Total Score: " << englishTotalScore << endl << endl;
    }
};

// 静态成员初始化
int Student::count = 0;
int Student::mathTotalScore = 0;
int Student::englishTotalScore = 0;

int main() {
    Student student1("Zhang San", 1001, 85, 90);
    Student student2("Li Si", 1002, 78, 88);
    Student student3("Wang Wu", 1003, 92, 80);

    student1.ShowBase();
    student2.ShowBase();
    student3.ShowBase();

    Student::showStatic(); // 显示统计信息

    return 0;
}
