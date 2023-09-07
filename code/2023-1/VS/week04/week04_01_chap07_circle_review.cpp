//#include <iostream>
//using namespace std;
//
//class Circle
//{
//private:
//    double radius; // 필드, 맴버변수, 데이터맴버, 속성
//    static int count; // 정적변수 (클래스 변수)
//public:
//    Circle(); // constructer 기본 생성자
//    Circle(double value); // 매개변수 생성자
//    //Circle(const Circle& circle); // 복사생성자 copy constructer
//    Circle(const Circle& circle) = delete; // 인터프리터가 묵시적으로 복사생성자를 만드는걸 방지하게 해준다.
//
//    ~Circle(); // 소멸자
//
//    // const는
//    // field, member변수의 side effect가 발생하지 않는다.
//    double getRadius() const;
//    double getArea() const;
//    double getPerimeter() const;
//    void setRadius(double value);
//    static int getCount();
//};
//
//int Circle::count = 0; // 정적변수 초기화 init
//Circle::Circle() : radius(1.0) // 초기화 리스트
//{
//    // radius == 1.0
//    cout << this << "객체 생성, 기본생성자 \n";
//    count++;
//}
//Circle::Circle(double value) : radius(value)
//{
//    cout << this << "객체 생성, 인스턴스가 있는생성자 \n";
//    count++;
//}
////Circle::Circle(const Circle& circle) : radius(circle.radius)
////{
////    // 일반함수 내에서 복사생성자를 사용 하려면 일반함수에서 선언된 객체를 복사하고,
////    // 메인함수 내에서 사용하려면 메인함수에서 선언된 객체를 복사 해야한다.
////    //this->radius = circle.radius; // radius = circle.radius
////    cout << this << "객체 생성, 복사 생성자 \n";
////    count++;
////}
//Circle::~Circle()
//{
//    cout << this << "===객체 소멸===\n";
//    count--;
//}
//
//
//double Circle::getRadius() const
//{
//    return radius;
//}
//double Circle::getArea() const
//{
//    const double PI = 3.14;
//    return (PI * radius * radius);
//}
//double Circle::getPerimeter() const
//{
//    const double PI = 3.14;
//    return (2 * PI * radius);
//}
//void Circle::setRadius(double value)
//{
//    radius = value;
//}
//int Circle::getCount() // static
//{
//    return count;
//}
//
//// 멤버 함수가 아닌 일반 함수
//void test()
//{
//    Circle circle5;
//    circle5.setRadius(5.0);
//
//
//    Circle circle4;
//    circle4.setRadius(100.0);
//
//    Circle circle6(circle5.getRadius());
//
//    cout << Circle::getCount() << endl;
//}0
//
//int main()
//{
//    cout << Circle::getCount() << endl;
//
//    // 첫 번째 circle 객체를 만들고 멤버 함수 호출
//    Circle circle1;
//
//    cout << Circle::getCount() << endl;
//
//    test();
//
//    cout << Circle::getCount() << endl;
//
//    circle1.setRadius(10.0);
//    // 두 번째 circle 객체를 만들고 멤버 함수 호출  
//
//    Circle circle2;
//    circle2.setRadius(20.0);
//
//    Circle circle3;
//    circle2.setRadius(20.0);
//
//    {
//        Circle circle7;
//
//    }
//    cout << Circle::getCount() << endl;
//    return 0;
//}