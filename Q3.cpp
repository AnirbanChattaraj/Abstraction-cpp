#include <iostream>
using namespace std;
class Animal {
public:
    virtual void sound() = 0;  
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog says: Bark Bark" << endl;
    }
};
class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat says: Meow Meow" << endl;
    }
};
class Cow : public Animal {
public:
    void sound() override {
        cout << "Cow says: Moo Moo" << endl;
    }
};

int main() {
    Animal* a;

    Dog d;
    Cat c;
    Cow w;

    a = &d;
    a->sound();

    a = &c;
    a->sound();

    a = &w;
    a->sound();

    return 0;
}