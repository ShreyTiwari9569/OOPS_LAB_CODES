#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;

    static int studentCount;

public:
    Student(int r, string n)
    {
        rollNo = r;
        name = n;
        studentCount++;
    }

    void display()
    {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }

    static void showCount()
    {
        cout << "Total Students = " << studentCount << endl;
    }
};

int Student::studentCount = 0;

int main()
{
    Student s1(101, "Rahul");
    Student s2(102, "Priya");
    Student s3(103, "Aman");

    cout << "Student 1 Details:" << endl;
    s1.display();

    cout << endl;

    cout << "Student 2 Details:" << endl;
    s2.display();

    cout << endl;

    cout << "Student 3 Details:" << endl;
    s3.display();

    cout << endl;

    Student::showCount();

    return 0;
}
