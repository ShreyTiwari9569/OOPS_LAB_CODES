#include <iostream>
using namespace std;

float simpleInterest(float principal, float rate = 5, float time = 2)
{
    return (principal * rate * time) / 100;
}

int main()
{
    float principal;

    cout << "Enter Principal Amount: ";
    cin >> principal;

    cout << "Simple Interest (Default Rate & Time) = "
         << simpleInterest(principal) << endl;

    cout << "Simple Interest (Rate = 7%, Default Time) = "
         << simpleInterest(principal, 7) << endl;

    cout << "Simple Interest (Rate = 7%, Time = 3 years) = "
         << simpleInterest(principal, 7, 3) << endl;

    return 0;
}
