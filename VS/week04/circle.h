#pragma once

#include <iostream>
#include "circle.h"
using namespace std;

class Circle
{
private:
    double radius; // �ʵ�, �ɹ�����, �����͸ɹ�, �Ӽ�
    static int count; // �������� (Ŭ���� ����)
public:
    Circle(); // constructer �⺻ ������
    Circle(double value); // �Ű����� ������
    //Circle(const Circle& circle); // ��������� copy constructer
    Circle(const Circle& circle) = delete; // ���������Ͱ� ���������� ��������ڸ� ����°� �����ϰ� ���ش�.

    ~Circle(); // �Ҹ���

    // const��
    // field, member������ side effect�� �߻����� �ʴ´�.
    double getRadius() const;
    double getArea() const;
    double getPerimeter() const;
    void setRadius(double value);
    static int getCount();
};
