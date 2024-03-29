#pragma once
#include "person.h"

// Employee 클래스의 정의
class Employee : public Person
{
private:
    double salary;
public:
    Employee();
    Employee(long identity, string name, double salary);

    void print() const;
};