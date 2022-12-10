#ifndef PRACTICES_STUDENT_HPP
#define PRACTICES_STUDENT_HPP

#include <string>
#include <iostream>


class Student {
private:
    double mark;
    std::string name;

public:
    double getMark();
    std::string getName();
    void setMark(double mark);
    void setName(std::string name);
    Student();
    Student(std::string name, double mark);
    void printStudent();
};


#endif //PRACTICES_STUDENT_HPP
