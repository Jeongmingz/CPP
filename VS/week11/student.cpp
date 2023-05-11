#include "student.h"

Student::Student()
    : Person(), gpa(0.0) // 호출 (Invocation)
{
}
Student::Student(long identity, string name, double gpa)
    : Person(identity, name), gpa(gpa) // 호출 (Invocation)
{
}
void Student::setGPA(double gp)
{
    gpa = gp;
}
double Student::getGPA() const
{
    return gpa;
}
void Student::print() const{
    Person::print(); // 위임 (Delegation)
    cout << gpa << '\n';
}