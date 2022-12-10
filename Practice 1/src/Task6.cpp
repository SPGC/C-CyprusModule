#include <iostream>
#include <string>


using namespace std;

typedef struct __student {
    string name;
    double grade;
} Student;


int main() {
    Student student1;
    Student student2;
    student1.grade = 4.9;
    student1.name = "Ilia";
    cout << "Enter student name ";
    cin >> student2.name;
    cout << "Enter student grade ";
    cin >> student2.grade;
    cout << "Welcome students:\n" << student1.name << " with grade: " << student1.grade << "\n";
    cout << student2.name << " with grade: " << student2.grade << "\n";
}