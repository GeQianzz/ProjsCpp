#include <iostream>
#include <string.h>
using namespace std;

class String{
private:
    char str[20];
public:
    String(){}
    String(char s[20]);
    void display ();
    friend bool operator > (String &str1, String &str2);
    friend bool operator < (String &str1, String &str2);
    friend bool operator == (String &str1, String &str2);
};

String::String(char s[20]){
    strcpy(str,s);
}

void String::display(){
    cout << str << endl;
}

bool operator > (String &str1, String &str2){
    if ( strcmp(str1.str, str2.str) > 0 ){
        return true;
    }
    else return false;
}

bool operator < (String &str1, String &str2){
    if ( strcmp(str1.str, str2.str) < 0 ){
        return true;
    }
    else return false;
}

bool operator == (String &str1, String &str2){
    if ( strcmp(str1.str, str2.str) == 0 ){
        return true;
    }
    else return false;
}


int main(){
    String str1("Hello");
    String str2("World");
    cout << (str1 > str2) << endl;
    cout << (str1 < str2) << endl;
    str1.display();
    str2.display();


    String str3("Hello ");
    cout << (str1 == str3) << endl;

    return 0;
}