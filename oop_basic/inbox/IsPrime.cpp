#include <iostream>
#include <list>
using namespace std;

int IsPrime(int num){
	int i = 2;
	for (i = 2; i < num/2; i++){
		if (num % i == 0){
            return 0; // Is Not Prime
        }
    }
    return 1; // Is Prime
}

int IsOne(int num){
    if (num % 10 == 1){
        return 1;
    }
    else return 0;
}

int main(){
    int num;
    cin >> num;
    int count = 0;
    
    list<int> rst;
    int i = 2;
    for (i = 2; i < num; i++){
        if (IsPrime(i) && IsOne(i)){
            rst.push_back(i);
            count++;
        }
    }

    // cout
    for (i = 0; i < count - 1; i++){
        cout << rst.front() << " ";
        rst.pop_front();
    }
    cout << rst.front();
    
    if(count == 0){
        cout << "-1";
    }

	return 0;
}