#include <iostream>
using namespace std;
class Shape
{
public:
    void display()
    {
        cout << "This is Shape Class" << endl;
    }
};
class Circle : public Shape
{
public:
    void showCircle()
    {
        cout << "This is Circle Class" << endl;
    }
};
class Rectangle : public Shape
{
public:
    void showRectangle()
    {
        cout << "This is Rectangle Class" << endl;
    }
};

int main()
{
    Circle c;
    Rectangle r;

    c.display();
    c.showCircle();

    cout << endl;

    r.display();
    r.showRectangle();

    return 0;
}
