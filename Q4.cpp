#include <iostream>
using namespace std;


class Employee {
public:
    virtual void work() = 0;  
};

// Developer class
class Developer : public Employee {
public:
    void work() override {
        cout << "Developer writes code" << endl;
    }
};

// Manager class
class Manager : public Employee {
public:
    void work() override {
        cout << "Manager manages the team" << endl;
    }
};

// Tester class
class Tester : public Employee {
public:
    void work() override {
        cout << "Tester tests the application" << endl;
    }
};

int main() {
    Employee* e;

    Developer d;
    Manager m;
    Tester t;

    e = &d;
    e->work();

    e = &m;
    e->work();

    e = &t;
    e->work();

    return 0;
}