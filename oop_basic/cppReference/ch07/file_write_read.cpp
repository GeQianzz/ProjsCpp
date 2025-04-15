#include <fstream>
#include <iostream>
using namespace std;

int main(){
    int num[5];
    int res[5];

    // Out: Write File
    ofstream outfile ("data.dat", ios::out);
    if(!outfile){
        cerr << "Cannot Open!" << endl;
        exit(1);
    }

    cout << "Enter" << endl;
    for (int i = 0; i < 5; i++){
        cin >> num[i];
        outfile << num[i];
    }

    // Infile: Read File
    ifstream infile ("data.dat", ios::in);
    if(!infile){
        cerr << "Cannot Open!" << endl;
        exit(1);
    }

    for (int i = 0; i < 5; i++){
        infile >> res[i];
        cout << res[i] << " ";
    }

    return 0;
}