#include <iostream>
#include <string>
using namespace std;


float gradeToPoint(string grade) {
    if (grade == "A+" || grade == "a+") return 4.0;
    else if (grade == "A" || grade == "a") return 4.0;
    else if (grade == "A-" || grade == "a-") return 3.7;
    else if (grade == "B+" || grade == "b+") return 3.3;
    else if (grade == "B" || grade == "b") return 3.0;
    else if (grade == "B-" || grade == "b-") return 2.7;
    else if (grade == "C+" || grade == "c+") return 2.3;
    else if (grade == "C" || grade == "c") return 2.0;
    else if (grade == "C-" || grade == "c-") return 1.7;
    else if (grade == "D" || grade == "d") return 1.0;
    else if (grade == "F" || grade == "f") return 0.0;
    else return -1; 
}

int main() {
    int n;
    cout << "Enter number of courses: ";
    cin >> n;

    float totalGradePoints = 0, totalCredits = 0;
    float credits, points;
    string grade;

    for (int i = 1; i <= n; i++) {
        cout << "\nCourse " << i << ":\n";

        
        cout << "Enter credit hours: ";
        cin >> credits;

        
        cout << "Enter letter grade (A+, A, A-, B+, B, etc.): ";
        cin >> grade;

        points = gradeToPoint(grade);

        
        while (points == -1) {
            cout << "Invalid grade! Enter again: ";
            cin >> grade;
            points = gradeToPoint(grade);
        }

        
        totalGradePoints += points * credits;
        totalCredits += credits;
    }

    float cgpa = totalGradePoints / totalCredits;

    cout << "\nYour CGPA is: " << cgpa << endl;

    return 0;
}

