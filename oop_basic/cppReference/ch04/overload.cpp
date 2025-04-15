#include <iostream>
using namespace std;

template<typename T>
T max (T a, T b, T c){
    if(b > a) a = b;
    if(c > a) a = c;
    return a;
}

int main(){
    float a, b, c;
    cin >> a >> b >> c;
    cout << max(a, b, c) << endl;
}


