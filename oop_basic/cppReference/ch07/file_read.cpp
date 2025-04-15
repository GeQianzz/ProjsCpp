#include <iostream>
#include <fstream>

using namespace std;

int main(){
    int a[10];
    int max;

    ifstream infile("f1.dat", ios::in);
    if (!infile){
        cerr << "open error!" << endl;
        exit(1);
    }

    for (int i = 0; i < 10; i++){
        infile >> a[i];
        cout << a[i] << " ";
    }

}