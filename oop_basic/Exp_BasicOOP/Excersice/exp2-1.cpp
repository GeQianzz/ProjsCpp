#include <iostream>
using namespace std;

class People {
public:
  People(int a, float h, float w) : age(a), height(h), weight(w) {
    num++;
    id = num;
  };
  void eating();
  void sporting();
  void sleeping();
  float get_BMI();
  void show();
  static void showNum();

protected:
  static int num;
  int id;
  int age;
  float height;
  float weight;
};

int People::num = 0;

void People::eating() { weight += 1.0; }

void People::sporting() {
  height += 1.0;
  weight -= 1.0;
}

void People::sleeping() {
  age += 1;
  height += 1.0;
  weight += 1.0;
}

void People::show() {
  cout << "\ndata:" << endl;
  cout << "id: " << id << endl;
  cout << "age: " << age << endl;
  cout << "height: " << height << endl;
  cout << "weight: " << weight << endl;
  cout << "BMI: " << get_BMI() << endl;
  cout << endl;
}

void People::showNum() { cout << "Total num: " << num << endl; }

float People::get_BMI() { return weight / ((height / 100) * (height / 100)); }

int main() {
  People p[3] = {People(20, 185.7, 76.5), People(20, 187.1, 79.5),
                 People(20, 176.9, 80.5)};

  for (int i = 0; i < 3; i++) {
    p[i].show();
  }
  People::showNum();

  p[1].eating();
  p[1].eating();
  p[1].eating();
  p[1].eating();

  p[0].sleeping();
  p[0].sleeping();
  p[0].sleeping();
  p[0].sleeping();
  p[0].sleeping();

  p[2].sporting();
  p[2].sporting();
  p[2].sporting();
  p[2].sporting();
  p[2].sporting();
  p[2].sporting();

  p[2].show();

  cout << "after" << endl;

  for (int i = 0; i < 3; i++) {
    p[i].show();
  }
  People::showNum();

  return 0;
}
