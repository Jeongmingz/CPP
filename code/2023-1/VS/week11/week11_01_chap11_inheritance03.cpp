#include "person.h"
#include "student.h"
#include "employee.h"


int main()
{
    Employee employee1(33333333L, "��Ӹ�", 90000);
    Employee employee2;
    // Person ��ü �ν��Ͻ�ȭ�ϰ� ���
    Person person;
    Person person2(111111112L, "��Ӹ�");

    person.setId(111111111L);
    person.setname("��븲");

    person.print(); // ��븲
    person2.print();
    employee1.print();
    employee2.print();

    // Student Ŭ���� �ν��Ͻ�ȭ�ϰ� ���
    Student student;
    Student student2(222222223L, "�Ӹ���", 4.3);

    student.setId(222222222L);
    student.setGPA(3.9);
    student.setname("��Ӹ�");

    // override �� �ڽ� Ŭ������ print���� ������, 
    // �� �ȿ� ����(delegation)���� �θ��� print�ڵ尡 �ִ�.
    student.print();
    student2.print();

    return 0;
}