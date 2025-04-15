#include <iostream>
using namespace std;

class Matrix {
private:
    int data[2][3];

public:
    friend istream& operator>>(istream& in, Matrix& m) {
        cout << "Enter elements of 2x3 matrix:" << endl;
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 3; ++j) {
                in >> m.data[i][j];
            }
        }
        return in;
    }

    friend ostream& operator<<(ostream& out, const Matrix& m) {
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 3; ++j) {
                out << m.data[i][j] << " ";
            }
            out << endl;
        }
        return out;
    }
};

int main() {
    Matrix m1, m2;
    cin >> m1;
    cin >> m2;

    cout << "Matrix 1:" << endl;
    cout << m1;
    cout << "Matrix 2:" << endl;
    cout << m2;

    return 0;
}
