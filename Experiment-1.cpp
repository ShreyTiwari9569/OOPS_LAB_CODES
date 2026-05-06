
#include <iostream>
using namespace std;

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

int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Addition = " << add(a, b) << endl;
    cout << "Subtraction = " << subtract(a, b) << endl;
    cout << "Multiplication = " << multiply(a, b) << endl;

    if (b != 0)
        cout << "Division = " << divide(a, b) << endl;
    else
        cout << "Division by zero is not possible." << endl;

    return 0;
}


