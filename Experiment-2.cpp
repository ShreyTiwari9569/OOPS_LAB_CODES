#include <iostream>
using namespace std;

class Interest
{
public:
    float simpleInterest(float principal, float rate = 5, float time = 2)
    {
        return (principal * rate * time) / 100;
    }
};

int main()
{
    float principal;
    Interest obj;

    cout << "Enter Principal Amount: ";
    cin >> principal;

    cout << "Simple Interest (Default Rate & Time) = "
         << obj.simpleInterest(principal) << endl;

    cout << "Simple Interest (Rate = 7%, Default Time) = "
         << obj.simpleInterest(principal, 7) << endl;

    cout << "Simple Interest (Rate = 7%, Time = 3 years) = "
         << obj.simpleInterest(principal, 7, 3) << endl;

    return 0;
}
