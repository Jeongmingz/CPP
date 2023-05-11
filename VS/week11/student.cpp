#include "student.h"

Student::Student()
    : Person(), gpa(0.0) // ȣ�� (Invocation)
{
}
Student::Student(long identity, string name, double gpa)
    : Person(identity, name), gpa(gpa) // ȣ�� (Invocation)
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
    Person::print(); // ���� (Delegation)
    cout << gpa << '\n';
}