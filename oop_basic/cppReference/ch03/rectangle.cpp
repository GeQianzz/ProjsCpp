#include <iostream>
using namespace std;

class cube{
public:
    void set();
    void display();
    int get_volumn();
private:
    int length;
    int width;
    int height;
};

void cube::set(){
    cout << "set the cube";
    cin >> length;
    cin >> width;
    cin >> height;
}

void cube::display(){
    cout << "length: " << length << endl;
    cout << "width: " << width << endl;
    cout << "height: " << height << endl;
}

int cube::get_volumn(){
    return length * width * height;
}

int main(){
    cube c;
    c.set();
    c.display();

    cout << "Volumn: " << c.get_volumn() << endl;
    return 0;
}
