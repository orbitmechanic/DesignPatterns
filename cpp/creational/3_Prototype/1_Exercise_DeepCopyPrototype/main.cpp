#include <iostream>

struct Point
{
    int x{ 0 }, y{ 0 };

    Point()= default;

    Point(const int x, const int y) : x{x}, y{y} {}
};

struct Line
{
    Point *start, *end;

    Line(Point* const start, Point* const end)
            : start(start), end(end)
    {
    }

    ~Line()
    {
        delete start;
        delete end;
    }

    Line deep_copy() const
    {
        // Exercise: write this:
        auto* copyStart = new Point(start->x,start->y);
        auto* copyEnd = new Point(end->x,end->y);
        return Line(copyStart, copyEnd);
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
