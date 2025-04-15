#include <iostream>
using namespace std;

class Martix{
private:
    int mat[2][3] = {0};
public:
    Martix(){};
    friend ostream& operator<< (ostream&, Martix&);
    friend istream& operator>> (istream&, Martix&);
};

ostream& operator<< (ostream& output, Martix& m){
    for(int i = 0; i < 2; i++){
        for(int t = 0; t < 3; t++){
            output << m.mat[i][t] << "\t";
        }
        output << endl;
    }
    return output;
}

istream& operator>> (istream& input, Martix& m){
    cout << "input:" << endl;
    for(int i = 0; i < 2; i++){
        for(int t = 0; t < 3; t++){
            input >> m.mat[i][t];
        }
    }
    return input;
}

int main(){
    Martix m;
    cin >> m;
    cout << m;

    return 0;
}