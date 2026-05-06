#include <iostream>
using namespace std;

class Grandfather
{
public:
    void showGrandfather()
    {
        cout << "This is Grandfather Class" << endl;
    }
};

class Father : public Grandfather
{
public:
    void showFather()
    {
        cout << "This is Father Class" << endl;
    }
};

class Son : public Father
{
public:
    void showSon()
    {
        cout << "This is Son Class" << endl;
    }
};

int main()
{
    Son s;

    s.showGrandfather();
    s.showFather();
    s.showSon();

    return 0;
}
