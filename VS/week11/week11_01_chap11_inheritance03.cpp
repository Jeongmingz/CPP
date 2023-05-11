#include "person.h"
#include "student.h"


int main()
{
    // Person 객체 인스턴스화하고 사용
    Person person;
    Person person2(111111112L, "대머림");

    person.setId(111111111L);
    person.setname("김대림");

    person.print(); // 김대림
    person2.print();

    // Student 클래스 인스턴스화하고 사용
    Student student;
    Student student2(222222223L, "머림머", 4.3);

    student.setId(222222222L);
    student.setGPA(3.9);
    student.setname("김머림");

    // override 된 자식 클래스의 print동작 이지만, 
    // 그 안엔 위임(delegation)받은 부모의 print코드가 있다.
    student.print();
    student2.print();

    return 0;
}