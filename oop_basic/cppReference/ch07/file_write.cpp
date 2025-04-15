#include <iostream>
#include <fstream>

using namespace std;

int main(){
    int num[10];
    
    ofstream outfile("f1.dat");
    if(!outfile){
        cerr << "open error!" << endl;
        exit(1);
    }

    cout << "enter 10 integers" << endl;
    for(int i = 0; i < 10; i++){
        cin >> num[i];
        outfile << num[i] << " ";
    }
    outfile.close();
    
    return 0;
}