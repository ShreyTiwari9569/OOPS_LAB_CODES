#include <iostream>
using namespace std;

class Interest
{
private:
    float principal, rate, time, simpleInterest;

public:
    Interest(float p, float r, float t)
    {
        principal = p;
        rate = r;
        time = t;

        simpleInterest = (principal * rate * time) / 100;
    }

    void display()
    {
        cout << "Principal Amount = " << principal << endl;
        cout << "Rate = " << rate << "%" << endl;
        cout << "Time = " << time << " years" << endl;
        cout << "Simple Interest = " << simpleInterest << endl;
    }
};

int main()
{
    float p, r, t;

    cout << "Enter Principal Amount: ";
    cin >> p;

    cout << "Enter Rate of Interest: ";
    cin >> r;

    cout << "Enter Time Period: ";
    cin >> t;

    Interest obj(p, r, t);

    obj.display();

    return 0;
}

