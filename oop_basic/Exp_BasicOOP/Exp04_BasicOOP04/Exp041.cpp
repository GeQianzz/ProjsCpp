#include <iostream>
#include <string>
using namespace std;

// Person�࣬��Ϊѧ���ͽ�ʦ�Ļ���
class Person {
protected:
    int id;         // ���
    string name;    // ����

public:
    // ���캯��
    Person(int id = 0, string name = "") : id(id), name(name) {}

    // ��������
    virtual void input() {
        cout << "��������: ";
        cin >> id;
        cout << "����������: ";
        cin >> name;
    }

    // ��ʾ����
    virtual void display() const {
        cout << "���: " << id << ", ����: " << name << endl;
    }
};

// Student�࣬�̳���Person��
class Student : public Person {
private:
    string class_num; // ���
    float score;      // �ɼ�

public:
    // ���캯��
    Student(int id = 0, string name = "", string class_num = "", float score = 0.0)
        : Person(id, name), class_num(class_num), score(score) {}

    // ����ѧ������
    void input() override {
        Person::input();  // ���û�������뷽��
        cout << "��������: ";
        cin >> class_num;
        cout << "������ɼ�: ";
        cin >> score;
    }

    // ��ʾѧ������
    void display() const override {
        Person::display();  // ���û������ʾ����
        cout << "���: " << class_num << ", �ɼ�: " << score << endl;
    }
};

// Teacher�࣬�̳���Person��
class Teacher : public Person {
private:
    string title;  // ְ��
    string department; // ����

public:
    // ���캯��
    Teacher(int id = 0, string name = "", string title = "", string department = "")
        : Person(id, name), title(title), department(department) {}

    // �����ʦ����
    void input() override {
        Person::input();  // ���û�������뷽��
        cout << "������ְ��: ";
        cin >> title;
        cout << "�����벿��: ";
        cin >> department;
    }

    // ��ʾ��ʦ����
    void display() const override {
        Person::display();  // ���û������ʾ����
        cout << "ְ��: " << title << ", ����: " << department << endl;
    }
};


int main() {
    // ����ѧ���������롢��ʾ����
    Student student;
    cout << "������ѧ����Ϣ:" << endl;
    student.input();
    cout << "ѧ����Ϣ:" << endl;
    student.display();

    // ������ʦ�������롢��ʾ����
    Teacher teacher;
    cout << "\n�������ʦ��Ϣ:" << endl;
    teacher.input();
    cout << "��ʦ��Ϣ:" << endl;
    teacher.display();

    return 0;
}
