#include <iostream>
using namespace std;

class Calculator
{
public:
    inline int add(int a, int b)
    {
        return a + b;
    }

    inline int subtract(int a, int b)
    {
        return a - b;
    }

    inline int multiply(int a, int b)
    {
        return a * b;
    }

    inline float divide(int a, int b)
    {
        return (float)a / b;
    }
};

int main()
{
    int a, b;
    Calculator c;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Addition = " << c.add(a, b) << endl;
    cout << "Subtraction = " << c.subtract(a, b) << endl;
    cout << "Multiplication = " << c.multiply(a, b) << endl;

    if (b != 0)
        cout << "Division = " << c.divide(a, b) << endl;
    else
        cout << "Division by zero is not possible." << endl;

    return 0;
}
