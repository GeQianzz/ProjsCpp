#include <iostream>
using namespace std;

class Date;
class Time{
private:
    int hour;
    int minute;
    int sec;
public:
    Time(){};
    Time(int h, int m, int s): hour(h), minute(m), sec(s) {};
    void display(Date &);
};

class Date{
private:
    int year;
    int month;
    int day;
public:
    Date(){};
    Date(int y, int m, int d): year(y), month(m), day(d) {};
    friend void Time::display(Date &);
};

void Time::display(Date &d){
    cout << "Date and Time" << endl;
    cout << d.year << "/" << d.month << "/" << d.day << endl;
    cout << hour << ":" << minute << ":" << sec << endl;
    cout << endl;
}


int main(){
    Time t1 (12, 24, 56);
    Date d1 (2024, 12, 19);
    t1.display(d1);

    return 0;
}