#include <iostream>
#include <string>
using namespace std;
/**************************************************************
 * Person 클래스의 정의                                       *
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


class Student : public Person // is-a, 상속 관계
{
private:
    double gpa;
public:
    void setGPA(double gpa);
    double getGPA() const;

    // 집접적인 접근을 하기 위해선 protected로 바꿔야 한다.
    //long test(){
    //    identity = 9; // 부모의 identity가 private라 접근 불가
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
    // Person 객체 인스턴스화하고 사용
    Person person; // Person Class constructor by compiler
    person.setId(111111111L);

    cout << "Person 객체의 정보: " << endl;
    cout << "사람의 구분 번호: " << person.getId();
    cout << endl << endl;

    // Student 클래스 인스턴스화하고 사용
    Student student; // Student Class constructor by compiler
    student.setId(222222222L);
    student.setGPA(3.9);

    cout << "Student 객체의 정보: " << endl;
    // 자식에게 없는 멤버함수라면 상속 관계에 있는 부모 클래스에 가서 가지고 온다.
    cout << "학생의 구분 번호: " << student.getId() << endl;
    cout << "학생의 학점: " << student.getGPA();

    Person* p2 = new Student(); // upcasting 
    //Student* p1 = new Person();

    return 0;
}