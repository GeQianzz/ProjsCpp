#include <iostream>
using namespace std;

class People {
protected:
    int age;      
    int height;
    int weight;
    static int num;

public:
    // 构造函数
    People(int a, int h, int w): age(a), height(h), weight(w) {
        num++;
    }

    void Eating() {
        weight++;
    }

    void Sporting() {
        height++;
    }

    void Sleeping() {
        age++;
        height++;
        weight++;
    }

    void Show() {
        cout << "age: " << age << endl;
        cout << "height: " << height << endl;
        cout << "weight: " << weight << endl << endl;
    }

    static void ShowNum() {
        cout << "Current Number: " << num << std::endl;
    }
};

// 初始化静态数据成员
int People::num = 0;

int main() {
    People person1(25, 175, 70);
    People person2(30, 180, 75);
    
    person1.Show();
    person2.Show();
    
    person1.Eating();
    person1.Sporting();
    person2.Sleeping();

    person1.Show();
    person2.Show();

    People::ShowNum();

    return 0;
}
