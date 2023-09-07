#include <iostream>
#include <string>
using namespace std;
/**************************************************************
 * Person Ŭ������ ����                                       *
 **************************************************************/
class Person
{
private:
    long identity;
public:
    void setId(long identity);
    long getId() const;
};
void Person::setId(long id)
{
    identity = id;
}
long Person::getId() const
{
    return identity;
}


class Student : public Person // is-a, ��� ����
{
private:
    double gpa;
public:
    void setGPA(double gpa);
    double getGPA() const;

    // �������� ������ �ϱ� ���ؼ� protected�� �ٲ�� �Ѵ�.
    //long test(){
    //    identity = 9; // �θ��� identity�� private�� ���� �Ұ�
    //    return identity
    //}

    long test() {
        setId(9);
        return getId();
    }
};
void Student::setGPA(double gp)
{
    gpa = gp;
}
double Student::getGPA() const
{
    return gpa;
}


int main()
{
    // Person ��ü �ν��Ͻ�ȭ�ϰ� ���
    Person person; // Person Class constructor by compiler
    person.setId(111111111L);

    cout << "Person ��ü�� ����: " << endl;
    cout << "����� ���� ��ȣ: " << person.getId();
    cout << endl << endl;

    // Student Ŭ���� �ν��Ͻ�ȭ�ϰ� ���
    Student student; // Student Class constructor by compiler
    student.setId(222222222L);
    student.setGPA(3.9);

    cout << "Student ��ü�� ����: " << endl;
    // �ڽĿ��� ���� ����Լ���� ��� ���迡 �ִ� �θ� Ŭ������ ���� ������ �´�.
    cout << "�л��� ���� ��ȣ: " << student.getId() << endl;
    cout << "�л��� ����: " << student.getGPA();

    Person* p2 = new Student(); // upcasting 
    //Student* p1 = new Person();

    return 0;
}