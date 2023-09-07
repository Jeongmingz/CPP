#include "employee.h"

Employee::Employee()
    : Person(), salary(0) // ȣ�� (Invocation)
{
}

Employee::Employee(long identity, string name, double salary)
    : Person(identity, name), salary(salary) // ȣ�� (Invocation)
{
}

void Employee::print() const
{
    Person::print(); // ���� (Delegation)
    cout << salary << "$" << '\n';
}
