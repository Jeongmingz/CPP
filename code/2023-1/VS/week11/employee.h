#pragma once
#include "person.h"

// Employee Ŭ������ ����
class Employee : public Person
{
private:
    double salary;
public:
    Employee();
    Employee(long identity, string name, double salary);

    void print() const;
};