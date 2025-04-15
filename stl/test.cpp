#include <iostream>
#include <map>

using namespace std;

int main(){
    map<string, int> m;
    
    m.insert({"apple", 12});
    cout << m["apple"] << endl;

    cout << m.size() << endl;
    

    return 0;
}
