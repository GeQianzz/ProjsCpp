#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;

void assignDistribute(vector<vector<double>>& distri, double s[4]){
    double now = 0;
    for(int i = 0; i < 4; i++){
        vector<double> tmp;
        tmp.push_back(now);
        now += s[i];
        tmp.push_back(now);
        distri.push_back(tmp);
    }
}

void printDistri(vector<vector<double>>& distri){
    cout << "Distribute condition: " << endl;
    int size = distri.size();
    for (int i = 0; i < size; i++){
        cout << "[" << distri[i][0] << ", ";
        cout << distri[i][1] << ")" << endl;
    }
    cout << endl;
}

void printStringAsDigit(string input){
    int length = input.size();
    for (int i = 0; i < length; i++){
        int tmp = int (input[i] - 'A');
        cout << tmp << " ";
    }
}

void calculateRes(vector<vector<double>>& distri, vector<double>& res, string input){
    double start = res[0];
    double end   = res[1]; 
    int length = input.size();

    for (int i = 0; i < length; i++){
        int index = int(input[i] - 'A'); // get string index
        double a = distri[index][0];
        double b = distri[index][1];
        double total = end - start;
        end   = start + total * b;
        start = start + total * a;
        
        // cout each res
        cout << "[" << start << ", " << end << ")" << endl;
    }
    cout << endl;
    res[0] = start;
    res[1] = end;
}



int main(){
    // set output precision

    cout << setprecision(8);
    // possibility
    double s[4] = {0.1, 0.4, 0.2, 0.3};

    vector<vector<double>> distri; 
    // distribute[i][0]: down boundry
    // distribute[i][1]: up boundry
    
    vector<double> res = {0, 1};   // result
    assignDistribute(distri, s);   // possibility -> distribute
    printDistri(distri);

    // input string 
    string input;
    cout << "Please input your key string" << endl;
    cin >> input;

    /*printStringAsDigit(input);*/
    calculateRes(distri, res, input);

    return 0;
}

