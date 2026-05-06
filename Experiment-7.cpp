#include <iostream>
using namespace std;

class Number
{
private:
    int value;

public:

    Number(int v = 0)
    {
        value = v;
    }

    
    Number operator+(Number obj)
    {
        Number temp;
        temp.value = value + obj.value;
        return temp;
    }

    
    Number operator-(Number obj)
    {
        Number temp;
        temp.value = value - obj.value;
        return temp;
    }

    Number operator++()
    {
        ++value;
        return *this;
    }


    bool operator==(Number obj)
    {
        return value == obj.value;
    }


    friend ostream& operator<<(ostream &out, Number obj);
};

ostream& operator<<(ostream &out, Number obj)
{
    out << obj.value;
    return out;
}

int main()
{
    Number n1(10), n2(5), n3;

    n3 = n1 + n2;
    cout << "Addition = " << n3 << endl;

    n3 = n1 - n2;
    cout << "Subtraction = " << n3 << endl;

    ++n1;
    cout << "After Increment = " << n1 << endl;

    if (n1 == n2)
        cout << "Both numbers are equal" << endl;
    else
        cout << "Both numbers are not equal" << endl;

    return 0;
}
