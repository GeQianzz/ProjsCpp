#include <iostream>
using namespace std;

class Martix{
private:
    int num[2][3];
public:
    Martix(){};
    void operator<< (int input[2][3]);
    void operator>> (int result[2][3]);
    friend void showMartix(Martix &m);
};

void Martix::operator<< (int input[2][3]){
    for (int i = 0; i < 2; i++){
        for (int t = 0; t < 3; t++){
            num[i][t] = input [i][t];
        }
    }
}

void Martix::operator>> (int result[2][3]){
    for (int i = 0; i < 2; i++){
        for (int t = 0; t < 3; t++){
            result[i][t] = num[i][t];
        }
    }
}

void showMartix(Martix &m){
    for (int i = 0; i < 2; i++){
        for (int t = 0; t < 3; t++){
            cout << m.num[i][t] << " " << endl;
        }
        cout << endl;
    }
}

int main(){
    Martix m1;
    

    return 0;
}
