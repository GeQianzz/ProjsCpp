#include <iostream>
#include <vector>
using namespace std;

void inputMatrix(vector<vector<int>> &matrix, int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int t = 0; t < col; t++) {
            cin >> matrix[i][t];
        }
    }
}

void printMatrix(vector<vector<int>> &matrix) {
    int row = matrix.size();
    int col = matrix[0].size();
    for (int i = 0; i < row; i++) {
        for (int t = 0; t < col; t++) {
            cout << matrix[i][t] << " ";
        }
        cout << endl;
    }
}

vector<vector<int>> transpose(vector<vector<int>> &matrix) {
    int row = matrix.size();
    int col = matrix[0].size();
    vector<vector<int>> res(col, vector<int>(row));
    for (int i = 0; i < row; i++) {
        for (int t = 0; t < col; t++) {
            res[t][i] = matrix[i][t];
        }
    }
    return res;
}

int main() {
    int row;
    int col;
    cout << "input row nums and col nums" << endl;
    cin >> row >> col;

    vector<vector<int>> matrix(row, vector<int>(col));
    inputMatrix(matrix, row, col);
    printMatrix(matrix);
    vector<vector<int>> res = transpose(matrix);
    printMatrix(res);

    return 0;
}
