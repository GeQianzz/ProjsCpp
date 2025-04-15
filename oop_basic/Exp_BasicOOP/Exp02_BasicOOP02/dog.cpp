#include <iostream>
#include <cstring>

using namespace std;

class Dog {
private:
    char* name; // 使用字符指针
    int age;    // 年龄
    char sex;   // 性别
    float weight; // 体重

public:
    // 构造函数
    Dog(const char* nm, int ag, char sx, float wgt) {
        name = new char[strlen(nm) + 1]; // 动态分配内存
        strcpy(name, nm);
        age = ag;
        sex = sx;
        weight = wgt;
    }

    // 拷贝构造函数
    Dog(const Dog& other) {
        name = new char[strlen(other.name) + 1];
        strcpy(name, other.name);
        age = other.age;
        sex = other.sex;
        weight = other.weight;
    }

    // 析构函数
    ~Dog() {
        delete[] name; // 释放动态分配的内存
    }

    // 显示狗的信息，每条信息换行
    void showInfo() const {
        cout << "Name: " << name << endl
             << "Age: " << age << endl
             << "Sex: " << sex << endl
             << "Weight: " << weight << " kg" << endl << endl;
    }

    // 设置狗的名字
    void setName(const char* nm) {
        delete[] name; // 释放旧内存
        name = new char[strlen(nm) + 1]; // 分配新内存
        strcpy(name, nm);
    }

    // 获取狗的名字
    const char* getName() const {
        return name;
    }

    // 其他设置和获取方法
    void setAge(int ag) { age = ag; }
    int getAge() const { return age; }

    void setSex(char sx) { sex = sx; }
    char getSex() const { return sex; }

    void setWeight(float wgt) { weight = wgt; }
    float getWeight() const { return weight; }
};

int main() {
    // 创建 Dog 对象的指针
    Dog* myDog = new Dog("Buddy", 3, 'M', 25.5);
    
    myDog->showInfo();
    
    // 修改狗的信息
    myDog->setName("Max");
    myDog->setAge(4);
    myDog->setWeight(27.0);
    
    myDog->showInfo();
    
    delete myDog;

    return 0;
}

