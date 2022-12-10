#include "../Include/Student.hpp"


double Student::getMark() {
    return mark;
}

std::string Student::getName() {
    return name;
}

void Student::setMark(double mark) {
    this->mark = mark;
}

void Student::setName(std::string name) {
    this->name = name;
}

Student::Student() {
    name = "Bob";
    mark = 2.39;
}

Student::Student(std::string name, double mark) {
    this->name = name;
    this->mark = mark;
}

void Student::printStudent(){
    std::cout << "Student " << name << " with mark " << mark << "\n";
}