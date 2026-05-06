#include <iostream>
using namespace std;

int calculate(int a, int b)
{
    return a + b;
}

float calculate(float a, float b)
{
    return a + b;
}

int calculate(int side)
{
    return side * side;
}

float calculate(float radius)
{
    return 3.14 * radius * radius;
}

int calculate(int length, int breadth, int height)
{
    return length * breadth * height;
}

int main()
{
    
    cout << "Sum of Integers = "
         << calculate(10, 20) << endl;

    cout << "Sum of Floats = "
         << calculate(5.5f, 4.5f) << endl;

    
    cout << "Area of Square = "
         << calculate(5) << endl;

    cout << "Area of Circle = "
         << calculate(3.0f) << endl;


    cout << "Volume of Cuboid = "
         << calculate(2, 3, 4) << endl;

    return 0;
}
