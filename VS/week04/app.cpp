#include "circle.h"

int main()
{
    cout << Circle::getCount() << endl;

    // 첫 번째 circle 객체를 만들고 멤버 함수 호출
    Circle circle1;

    cout << Circle::getCount() << endl;

    cout << Circle::getCount() << endl;

    circle1.setRadius(10.0);
    // 두 번째 circle 객체를 만들고 멤버 함수 호출  

    Circle circle2;
    circle2.setRadius(20.0);

    Circle circle3;
    circle2.setRadius(20.0);

    {
        Circle circle7;

    }
    cout << Circle::getCount() << endl;
    return 0;
}