// Author – Shrey-241496

#include <iostream>
using namespace std;

// ---------------- Single Inheritance ----------------

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

// ---------------- Multiple Inheritance ----------------

class Father
{
public:
    void showFather()
    {
        cout << "This is Father Class" << endl;
    }
};

class Mother
{
public:
    void showMother()
    {
        cout << "This is Mother Class" << endl;
    }
};

class Child : public Father, public Mother
{
public:
    void showChild()
    {
        cout << "This is Child Class" << endl;
    }
};

// ---------------- Multilevel Inheritance ----------------

class Grandfather
{
public:
    void showGrandfather()
    {
        cout << "This is Grandfather Class" << endl;
    }
};

class Father1 : public Grandfather
{
public:
    void showFather1()
    {
        cout << "This is Father Class" << endl;
    }
};

class Son : public Father1
{
public:
    void showSon()
    {
        cout << "This is Son Class" << endl;
    }
};

// ---------------- Hierarchical Inheritance ----------------

class Shape
{
public:
    void display()
    {
        cout << "This is Shape Class" << endl;
    }
};

class Circle : public Shape
{
public:
    void showCircle()
    {
        cout << "This is Circle Class" << endl;
    }
};

class Rectangle : public Shape
{
public:
    void showRectangle()
    {
        cout << "This is Rectangle Class" << endl;
    }
};

// ---------------- Hybrid Inheritance ----------------

class Person1
{
public:
    void showPerson1()
    {
        cout << "This is Person Class" << endl;
    }
};

class Student1 : public Person1
{
public:
    void showStudent1()
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

class Result : public Student1, public Sports
{
public:
    void showResult()
    {
        cout << "This is Result Class" << endl;
    }
};

int main()
{
    // Single Inheritance
    cout << "----- Single Inheritance -----" << endl;

    Student s;

    s.showPerson();
    s.showStudent();

    cout << endl;

    // Multiple Inheritance
    cout << "----- Multiple Inheritance -----" << endl;

    Child c;

    c.showFather();
    c.showMother();
    c.showChild();

    cout << endl;

    // Multilevel Inheritance
    cout << "----- Multilevel Inheritance -----" << endl;

    Son s1;

    s1.showGrandfather();
    s1.showFather1();
    s1.showSon();

    cout << endl;

    // Hierarchical Inheritance
    cout << "----- Hierarchical Inheritance -----" << endl;

    Circle c1;
    Rectangle r1;

    c1.display();
    c1.showCircle();

    cout << endl;

    r1.display();
    r1.showRectangle();

    cout << endl;

    // Hybrid Inheritance
    cout << "----- Hybrid Inheritance -----" << endl;

    Result r;

    r.showPerson1();
    r.showStudent1();
    r.showSports();
    r.showResult();

    return 0;
}