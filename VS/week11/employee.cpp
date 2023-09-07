#include "employee.h"

Employee::Employee()
    : Person(), salary(0) // 호출 (Invocation)
{
}

Employee::Employee(long identity, string name, double salary)
    : Person(identity, name), salary(salary) // 호출 (Invocation)
{
}

void Employee::print() const
{
    Person::print(); // 위임 (Delegation)
    cout << salary << "$" << '\n';
}
