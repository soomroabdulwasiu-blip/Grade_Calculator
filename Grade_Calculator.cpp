#include <iostream>
using namespace std;

int main() {
    int marks1, marks2, marks3;
    cout << "Enter marks of three subjects: ";
    cin >> marks1 >> marks2 >> marks3;

    int total = marks1 + marks2 + marks3;
    float percentage = total / 3.0;

    cout << "Total Marks: " << total << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    if(percentage >= 90)
        cout << "Grade: A+" << endl;
    else if(percentage >= 80)
        cout << "Grade: A" << endl;
    else if(percentage >= 70)
        cout << "Grade: B" << endl;
    else if(percentage >= 60)
        cout << "Grade: C" << endl;
    else if(percentage >= 50)
        cout << "Grade: D" << endl;
    else
        cout << "Grade: F (Fail)" << endl;

    return 0;
}
