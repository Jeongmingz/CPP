//#include <iostream>
//#include <string>
//using namespace std;
///**************************************************************
// * Person 클래스의 정의                                       *
// **************************************************************/
//class Person
//{
//private:
//    long identity;
//    string name;
//public:
//    Person();
//    Person(long identity, string name);
//    void setId(long identity);
//    long getId() const;
//    void setname(string name);
//    string getname() const;
//    void print();
//};
//
//Person::Person() 
//    : identity(0), name("nameless")
//{
//}
//
//Person::Person(long identity, string name)
//    : identity(identity), name(name)
//{
//}
//
//void Person::setId(long identity)
//{
//    this->identity = identity;
//}
//
//long Person::getId() const
//{
//    return identity;
//}
//
//void Person::setname(string name)
//{
//    this->name = name;
//}
//
//string Person::getname() const
//{
//    return string();
//}
//
//void Person::print()
//{
//    cout << name << '\n';
//}
//
//
//class Student : public Person // is-a, 상속 관계
//{
//private:
//    double gpa;
//public:
//    Student();
//    Student(long identity, string name, double gpa);
//
//    void setGPA(double gpa);
//    double getGPA() const;
//
//    // 집접적인 접근을 하기 위해선 protected로 바꿔야 한다.
//    //long test(){
//    //    identity = 9; // 부모의 identity가 private라 접근 불가
//    //    return identity
//    //}
//
//    long test() { // inline
//        setId(9);
//        return getId();
//    }
//    void print();
//};
//Student::Student() 
//    : Person(), gpa(0.0) // 호출 (Invocation)
//{
//}
//Student::Student(long identity, string name, double gpa) 
//    : Person(identity, name), gpa(gpa) // 호출 (Invocation)
//{
//}
//void Student::setGPA(double gp)
//{
//    gpa = gp;
//}
//double Student::getGPA() const
//{
//    return gpa;
//}
//void Student::print() {
//    Person::print(); // 위임 (Delegation)
//    cout << gpa << '\n';
//}
//
//
//int main()
//{
//    // Person 객체 인스턴스화하고 사용
//    Person person; 
//    Person person2(111111112L, "대머림");
//
//    person.setId(111111111L);
//    person.setname("김대림");
//
//    person.print(); // 김대림
//    person2.print();
//
//    // Student 클래스 인스턴스화하고 사용
//    Student student;
//    Student student2(222222223L, "머림머", 4.3);
//
//    student.setId(222222222L);
//    student.setGPA(3.9);
//    student.setname("김머림");
//
//    // override 된 자식 클래스의 print동작 이지만, 
//    // 그 안엔 위임(delegation)받은 부모의 print코드가 있다.
//    student.print(); 
//    student2.print();
//
//    return 0;
//}