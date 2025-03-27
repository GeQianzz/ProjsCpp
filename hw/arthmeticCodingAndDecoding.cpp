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

void encodeRes(vector<vector<double>>& distri, vector<double>& res, string input){
    double start = res[0];
    double end   = res[1]; 
    int length = input.size();

    for (int i = 0; i < length; i++){
        int index = int(input[i] - 'A');
        double a = distri[index][0];
        double b = distri[index][1];
        double total = end - start;
        end   = start + total * b;
        start = start + total * a;
        
        cout << "[" << start << ", " << end << ")" << endl;
    }
    cout << endl;
    res[0] = start;
    res[1] = end;
}

string decodeRes(vector<vector<double>>& distri, double code, int length){
    string result = "";
    double start = 0.0;
    double end = 1.0;
    double value = code;
    int size = distri.size();

    for(int i = 0; i < length; i++){
        double total = end - start;
        for(int j = 0; j < size; j++){
            double lower = start + total * distri[j][0];
            double upper = start + total * distri[j][1];
            
            if(value >= lower && value < upper){
                char c = 'A' + j;
                result += c;
                end = upper;
                start = lower;
                break;
            }
        }
    }
    return result;
}

int main(){
    cout << setprecision(8);
    double s[4] = {0.1, 0.4, 0.2, 0.3};
    vector<vector<double>> distri; 
    vector<double> res = {0, 1};
    
    assignDistribute(distri, s);
    printDistri(distri);

    string input;
    cout << "Please input your key string" << endl;
    cin >> input;

    encodeRes(distri, res, input);
    double codeRes = res[0];
    cout << "code is: " << codeRes << endl;

    string decoded = decodeRes(distri, codeRes, input.length());
    cout << "decoded string is: " << decoded << endl;

    return 0;
}
