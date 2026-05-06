#include <iostream>
using namespace std;
class Engine
{
private:
    string engineType;

public:
    Engine(string type)
    {
        engineType = type;
    }

    void showEngine()
    {
        cout << "Engine Type: " << engineType << endl;
    }
};
class Car
{
private:
    string carName;
    Engine engine;

public:
    Car(string name, string type)
        : engine(type)
    {
        carName = name;
    }

    void display()
    {
        cout << "Car Name: " << carName << endl;
        engine.showEngine();
    }
};

int main()
{
    Car c1("BMW", "Petrol");

    c1.display();

    return 0;
}
