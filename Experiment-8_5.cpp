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

class Sports
{
public:
    void showSports()
    {
        cout << "This is Sports Class" << endl;
    }
};
class Result : public Student, public Sports
{
public:
    void showResult()
    {
        cout << "This is Result Class" << endl;
    }
};

int main()
{
    Result r;

    r.showPerson();
    r.showStudent();
    r.showSports();
    r.showResult();

    return 0;
}
