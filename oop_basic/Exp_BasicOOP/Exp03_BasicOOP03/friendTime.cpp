#include <iostream>
using namespace std;

class Date;

class Time {
public: 
    void display(const Date& d);
};


class Date {
private:
    int year, month, day; 

public:
    Date(int y, int m, int d) : year(y), month(m), day(d) {}

    friend class Time;
};

void Time::display(const Date& d) {
    cout << "Date: " << d.year << "-" << d.month << "-" << d.day << endl;
    cout << "Time: 16:45:00" << endl;  // 示例时间，固定输出时分秒
}

int main() {
    Date date(2024, 11, 17);   // 创建 Date 对象，表示 2024年11月17日
    Time time;                 // 创建 Time 对象
    time.display(date);        // 调用 Time 类的 display 函数，传入 Date 对象
    return 0;
}
