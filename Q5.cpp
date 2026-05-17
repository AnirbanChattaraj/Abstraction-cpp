#include <iostream>
using namespace std;
class Vehicle {
public:
    virtual void start() = 0;  // pure virtual function
};


class Car : public Vehicle {
public:
    void start() override {
        cout << "Car starts with key ignition or push button" << endl;
    }
};


class Bike : public Vehicle {
public:
    void start() override {
        cout << "Bike starts with self start or kick start" << endl;
    }
};


class Bus : public Vehicle {
public:
    void start() override {
        cout << "Bus starts with heavy diesel ignition system" << endl;
    }
};

int main() {
    Vehicle* v;

    Car c;
    Bike b;
    Bus bu;

    v = &c;
    v->start();

    v = &b;
    v->start();

    v = &bu;
    v->start();

    return 0;
}