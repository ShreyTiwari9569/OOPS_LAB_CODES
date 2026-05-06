#include <iostream>
using namespace std;
class Person
{
public:
    void showPerson()
    {
        cout << "This is Person Class" << endl;
    }
};
class Student : public Person
{
public:
    void showStudent()
    {
        cout << "This is Student Class" << endl;
    }
};

int main()
{
    Student s;

    s.showPerson();
    s.showStudent();

    return 0;
}
