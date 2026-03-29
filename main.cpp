#include <iostream>
using namespace std;

class Student {
private:
    float q1, q2, mid, finalExam;
    float percentage;

public:
    void inputMarks() {
        cout << "Enter Quiz 1 marks (out of 10): ";
        cin >> q1;

        cout << "Enter Quiz 2 marks (out of 10): ";
        cin >> q2;

        cout << "Enter Midterm marks (out of 100): ";
        cin >> mid;

        cout << "Enter Final Exam marks (out of 100): ";
        cin >> finalExam;
    }

    void calculate() {
        float quizPart = ((q1 + q2) / 20) * 25;
        float midPart = (mid / 100) * 25;
        float finalPart = (finalExam / 100) * 50;

        percentage = quizPart + midPart + finalPart;
    }

    char getGrade() {
        if (percentage >= 80) return 'A';
        else if (percentage >= 70) return 'B';
        else if (percentage >= 60) return 'C';
        else if (percentage >= 50) return 'D';
        else return 'F';
    }

    float getGPA() {
        char grade = getGrade();

        if (grade == 'A') return 4.0;
        else if (grade == 'B') return 3.0;
        else if (grade == 'C') return 2.0;
        else if (grade == 'D') return 1.0;
        else return 0.0;
    }

    void showResult() {
        calculate();

        cout << "\nYour Percentage: " << percentage << "%" << endl;
        cout << "Grade: " << getGrade() << endl;
        cout << "GPA: " << getGPA() << endl;
    }
};

int main() {
    Student s;

    s.inputMarks();
    s.showResult();

    return 0;
}