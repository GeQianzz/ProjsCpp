#include <iostream>
#include <string>

using namespace std;

// ����Teacher
class Teacher {
protected:
    string name;
    int age;
    string gender;
    string address;
    string phone;
    string title;  // ְ��

public:
    Teacher(string n, int a, string g, string addr, string p, string t)
        : name(n), age(a), gender(g), address(addr), phone(p), title(t) {}

    void display() {
        cout << "����: " << name << endl;
        cout << "����: " << age << endl;
        cout << "�Ա�: " << gender << endl;
        cout << "ְ��: " << title << endl;
        cout << "��ַ: " << address << endl;
        cout << "�绰: " << phone << endl;
    }
};

// ����Cadre���ɲ���
class Cadre {
protected:
    string name;
    int age;
    string gender;
    string address;
    string phone;
    string post;  // ְ��

public:
    Cadre(string n, int a, string g, string addr, string p, string po)
        : name(n), age(a), gender(g), address(addr), phone(p), post(po) {}

    void display() {
        cout << "����: " << name << endl;
        cout << "����: " << age << endl;
        cout << "�Ա�: " << gender << endl;
        cout << "ְ��: " << post << endl;
        cout << "��ַ: " << address << endl;
        cout << "�绰: " << phone << endl;
    }
};

// ������Teacher_Cadre����ʦ��ɲ���
class Teacher_Cadre : public Teacher, public Cadre {
private:
    double wages;  // ����

public:
    Teacher_Cadre(string n, int a, string g, string addr, string p, string t, string po, double w)
        : Teacher(n, a, g, addr, p, t), Cadre(n, a, g, addr, p, po), wages(w) {}

    void show() {
        // ����Teacher���е�display����
        Teacher::display();
        // ���ְ���빤��
        cout << "ְ��: " << Cadre::post << endl;
        cout << "����: " << wages << endl;
    }
};

int main() {
    Teacher_Cadre teacher_cadre("����", 40, "��", "������", "123456789", "����", "��ί���", 8000.5);

    teacher_cadre.show();

    return 0;
}
