#include <iostream>
#include <string>
using namespace std;

class Birthdate{
private:
    int year;
    int month;
    int day;

public:
    Birthdate();
    Birthdate(int year, int month, int day);
    void print();
};




class Person{
private:
    static int person_cnt;
    string name;
    int id;
    Birthdate birth;
public:
    Person();
    Person(string name, Birthdate birth);
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
    Student(string name, Birthdate birth, float gpa);

    Student(const Student& st);

    void setGpa(float gpa);
    float getGpa();
};

Birthdate::Birthdate():year(2023), month(6), day(15){}
Birthdate::Birthdate(int year, int month, int day): year(year), month(month), day(day){}

void Birthdate::print(){
    cout << this->year << this->month << this->day << endl;
}



Student::Student(): Person(), gpa(0.0){}
Student::Student(string name, Birthdate birth, float gpa):Person(name, birth), gpa(gpa){}

void Student::setGpa(float gpa){
    this->gpa = gpa;
}
float Student::getGpa(){
    return this->gpa;
}

int Person::person_cnt=1;
Person :: Person():name("nameless"), birth(), id(person_cnt){
    this->person_cnt++;
}
Person :: Person(string name, Birthdate birth):name(name), birth(birth), id(person_cnt){
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
    birth.print();
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

    // Student s1("정민", 4.3);
    // s1.print();
}