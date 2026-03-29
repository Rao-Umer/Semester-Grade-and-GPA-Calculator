
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
```

---

# 📄 README.md (Clean + Natural)

## 📊 Semester Grade & GPA Calculator (C++)

This is a simple C++ program that calculates a student's final percentage, grade, and GPA based on quiz, midterm, and final exam marks.

---

## 🎯 Objective

To practice basic C++ concepts and apply OOP to solve a real-life grading problem.

---

## 🧠 Concepts Used

* Classes and Objects
* Functions
* If-else conditions
* Basic arithmetic

---

## ⚙️ Grading Policy

* Two quizzes (10 marks each) → 25% total
* Midterm exam → 25%
* Final exam → 50%

---

## 📌 GPA System

* A → 4.0
* B → 3.0
* C → 2.0
* D → 1.0
* F → 0.0

---

## ▶️ How to Run

```bash id="jzv8b2"
g++ main.cpp -o app
./app
```

---

## 💬 Sample Output

```id="q1k5bz"
Enter Quiz 1 marks (out of 10): 8
Enter Quiz 2 marks (out of 10): 7
Enter Midterm marks (out of 100): 70
Enter Final Exam marks (out of 100): 80

Your Percentage: 76.25%
Grade: B
GPA: 3.0
```

---
