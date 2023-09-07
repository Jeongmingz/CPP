#include <iostream>
#include <string>
using namespace std;

class Person{
private:
    static int person_cnt;
    string name;
    int id;
    
public:
    Person();
    Person(string name);

    void setName(string name);
    string getName();
    int getId();
    void print();
   
};

class Student : public Person{
private:
    float gpa;
public: 
    Student();
    Student(string name, float gpa);

    Student(const Student& st);

    void setGpa(float gpa);
    float getGpa();
};

Student::Student(): Person(), gpa(0.0){}
Student::Student(string name, float gpa):Person(name), gpa(gpa){}

void Student::setGpa(float gpa){
    this->gpa = gpa;
}
float Student::getGpa(){
    return this->gpa;
}

int Person::person_cnt=1;
Person :: Person():name("nameless"), id(person_cnt){
    this->person_cnt++;
}
Person :: Person(string name):name(name), id(person_cnt){
    this->person_cnt++;
}

void Person::setName(string name){
    this->name = name;
}
string Person::getName(){
    return this->name;
}

int Person::getId(){
    return this->id;
}

void Person::print(){
    cout << Person::getId() << " || " << Person::getName() << endl;
    }


int main()
{
    Person p1;
    p1.print();

    Person p2("정민");
    p2.print();

    Person p3("건형");
    p3.print();

    Person p4;
    p4.print();

    Student s1("정민", 4.3);
    s1.print();
}