//#include <iostream>
//#include <string>
//using namespace std;
///**************************************************************
// * Person Ŭ������ ����                                       *
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
//class Student : public Person // is-a, ��� ����
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
//    // �������� ������ �ϱ� ���ؼ� protected�� �ٲ�� �Ѵ�.
//    //long test(){
//    //    identity = 9; // �θ��� identity�� private�� ���� �Ұ�
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
//    : Person(), gpa(0.0) // ȣ�� (Invocation)
//{
//}
//Student::Student(long identity, string name, double gpa) 
//    : Person(identity, name), gpa(gpa) // ȣ�� (Invocation)
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
//    Person::print(); // ���� (Delegation)
//    cout << gpa << '\n';
//}
//
//
//int main()
//{
//    // Person ��ü �ν��Ͻ�ȭ�ϰ� ���
//    Person person; 
//    Person person2(111111112L, "��Ӹ�");
//
//    person.setId(111111111L);
//    person.setname("��븲");
//
//    person.print(); // ��븲
//    person2.print();
//
//    // Student Ŭ���� �ν��Ͻ�ȭ�ϰ� ���
//    Student student;
//    Student student2(222222223L, "�Ӹ���", 4.3);
//
//    student.setId(222222222L);
//    student.setGPA(3.9);
//    student.setname("��Ӹ�");
//
//    // override �� �ڽ� Ŭ������ print���� ������, 
//    // �� �ȿ� ����(delegation)���� �θ��� print�ڵ尡 �ִ�.
//    student.print(); 
//    student2.print();
//
//    return 0;
//}