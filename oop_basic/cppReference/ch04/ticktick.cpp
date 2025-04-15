#include <iostream>
using namespace std;

class Time{
private:
    int hour;
    int minute;
    int sec;
public:
    Time(){};
    Time(int h, int m, int s): hour(h), minute(m), sec(s) {};
    void showTime();
    void operator++();
};

void Time::showTime(){
    if(hour < 10) cout << "0";
    cout << hour << ":";
    if(minute < 10) cout << "0";
    cout << minute << ":";
    if(sec < 10) cout << "0";
    cout << sec << endl;
}

void Time::operator++ (){
    if (sec == 59){
        sec = 0;
        if (minute == 59){
            minute = 0;
            if (hour == 23){
                hour = 0;
            } else {
                hour += 1;
            }
        } else {
            minute += 1;
        }
    } else {
        sec += 1;
    }
}

int main(){
    Time t1(0,0,0);
    for(int i = 0; i < 50000; i++){
        ++t1;
        t1.showTime();
    }
    return 0;
}