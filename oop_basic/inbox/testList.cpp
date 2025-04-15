#include <iostream>
#include <list>

using namespace std;


int main(){
    list<int> listA;
    listA.push_back(1);
    listA.push_back(2);
    listA.push_back(3);
    listA.push_back(4);
    cout << listA.size() << endl;

    for (int i = 0; i < 4; i++){
        cout << listA.front();
        listA.pop_front();
    }


    return 0;
}