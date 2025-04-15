#include <iostream>
using namespace std;

// Student class
class Student {
public:
    int id;     // Student ID
    float score; // Score

    Student(int id, float score) : id(id), score(score) {}
};

// Function: Find the student with the highest score
void max(Student* students, int size) {
    int maxIndex = 0;
    for (int i = 1; i < size; i++) {
        if (students[i].score > students[maxIndex].score) {
            maxIndex = i;
        }
    }
    cout << "The student with the highest score is: " << students[maxIndex].id << endl;
}

int main() {
    // Create an array of 5 students
    Student students[5] = {
        Student(240, 85.5),
        Student(241, 90.0),
        Student(242, 88.5),
        Student(243, 92.5),
        Student(244, 80.0)
    };

    // 1. Use a Pointer
    Student* ptr = students;
    cout << "The 1st student's ID: " << ptr->id << ", Score: " << ptr->score << endl;
    cout << "The 3rd student's ID: " << (ptr + 2)->id << ", Score: " << (ptr + 2)->score << endl;
    cout << "The 5th student's ID: " << (ptr + 4)->id << ", Score: " << (ptr + 4)->score << endl;

    // 2. Call the Max Function
    max(students, 5);

    return 0;
}
