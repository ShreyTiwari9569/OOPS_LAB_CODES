#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;

public:

    Student()
    {
        rollNo = 0;
        name = "Not Assigned";

        cout << "Default Constructor Called" << endl;
    }

    Student(int r, string n)
    {
        rollNo = r;
        name = n;

        cout << "Parameterized Constructor Called" << endl;
    }

    Student(Student &s)
    {
        rollNo = s.rollNo;
        name = s.name;

        cout << "Copy Constructor Called" << endl;
    }

    Student(int r)
    {
        rollNo = r;
        name = "Unknown";

        cout << "Overloaded Constructor Called" << endl;
    }

    void display()
    {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }
};

int main()
{

    Student s1;
    s1.display();

    cout << endl;

    Student s2(101, "Rahul");
    s2.display();

    cout << endl;

    Student s3(s2);
    s3.display();

    cout << endl;

    Student s4(102);
    s4.display();

    return 0;
}

