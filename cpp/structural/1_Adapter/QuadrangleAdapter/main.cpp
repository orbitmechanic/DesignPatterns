#include <iostream>

struct Square
{
    int side{ 0 };
    explicit Square(const int side)
            : side(side)
    {
    }
};

struct Rectangle
{
    virtual int width() const = 0;
    virtual int height() const = 0;

    int area() const
    {
        return width() * height();
    }
};

class SquareToRectangleAdapter : Rectangle
{
    int sidelength;
public:
    SquareToRectangleAdapter(const Square& square) {
        sidelength = square.side;
    }

    int width() const override {
        return sidelength;
    }

    int height() const override {
        return sidelength;
    }
    int area() {
        return sidelength*sidelength;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
