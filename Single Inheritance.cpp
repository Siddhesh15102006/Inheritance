#include <iostream>
using namespace std;

class Student {
protected:
    string name;
    int roll;
public:
    void setStudent(string n, int r) {
        name = n;
        roll = r;
    }
    void displayStudent() {
        cout << "Name: " << name << ", Roll No: " << roll << endl;
    }
};

class Exam : public Student {
    int marks;
public:
    void setMarks(int m) {
        marks = m;
    }
    void displayResult() {
        displayStudent();
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Exam e;
    e.setStudent("Palak Soni", 101);
    e.setMarks(95);
    e.displayResult();
    return 0;
}

Output :-
Name: Siddhesh Gajare, Roll No: 505
Marks: 75


=== Code Execution Successful ===
