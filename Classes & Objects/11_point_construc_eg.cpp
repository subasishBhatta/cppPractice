#include <iostream>
#include <cmath>
using namespace std;

class Point
{
    int a, b;
    friend int distance(Point, Point);
    public:
        Point(int, int);
        void display(void);
};

Point::Point(int x, int y)
{
    a = x;
    b = y;
}

void Point::display()
{
    cout << "The point is (" << a << ", " << b << ")" << endl;
}

int distance(Point o1, Point o2)
{
    int dist{};
    dist = sqrt(pow((o1.a - o2.a), 2) + pow((o1.b - o2.b), 2));
    return dist;
}

int main()
{
    Point p(1, 0);
    p.display();

    Point q(70, 0);
    q.display();

    cout << "The distance between (1, 0) and (70, 0) is " << distance(p, q) << endl;

    return 0;
}