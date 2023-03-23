#pragma once

#include <iostream>
#include "circle.h"
using namespace std;

class Circle
{
private:
    double radius; // 필드, 맴버변수, 데이터맴버, 속성
    static int count; // 정적변수 (클래스 변수)
public:
    Circle(); // constructer 기본 생성자
    Circle(double value); // 매개변수 생성자
    //Circle(const Circle& circle); // 복사생성자 copy constructer
    Circle(const Circle& circle) = delete; // 인터프리터가 묵시적으로 복사생성자를 만드는걸 방지하게 해준다.

    ~Circle(); // 소멸자

    // const는
    // field, member변수의 side effect가 발생하지 않는다.
    double getRadius() const;
    double getArea() const;
    double getPerimeter() const;
    void setRadius(double value);
    static int getCount();
};
