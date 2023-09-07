#pragma once
#include "person.h"
class Student : public Person // is-a, 상속 관계
{
private:
    double gpa;
public:
    Student();
    Student(long identity, string name, double gpa);

    void setGPA(double gpa);
    double getGPA() const;

    // 집접적인 접근을 하기 위해선 protected로 바꿔야 한다.
    //long test(){
    //    identity = 9; // 부모의 identity가 private라 접근 불가
    //    return identity
    //}

    long test() { // inline
        setId(9);
        return getId();
    }
    void print() const;
};
