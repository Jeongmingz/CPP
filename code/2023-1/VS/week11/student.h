#pragma once
#include "person.h"
class Student : public Person // is-a, ��� ����
{
private:
    double gpa;
public:
    Student();
    Student(long identity, string name, double gpa);

    void setGPA(double gpa);
    double getGPA() const;

    // �������� ������ �ϱ� ���ؼ� protected�� �ٲ�� �Ѵ�.
    //long test(){
    //    identity = 9; // �θ��� identity�� private�� ���� �Ұ�
    //    return identity
    //}

    long test() { // inline
        setId(9);
        return getId();
    }
    void print() const;
};
