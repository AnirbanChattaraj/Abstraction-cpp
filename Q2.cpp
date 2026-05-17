//Payment System
#include <iostream>
using namespace std;
class Payment {
public:
    virtual void pay() = 0; 
};

// UPI payment
class UPI : public Payment {
public:
    void pay() override {
        cout << "Payment done using UPI" << endl;
    }
};

// Credit Card payment
class CreditCard : public Payment {
public:
    void pay() override {
        cout << "Payment done using Credit Card" << endl;
    }
};

// PayPal payment
class PayPal : public Payment {
public:
    void pay() override {
        cout << "Payment done using PayPal" << endl;
    }
};

int main() {
    Payment* p;

    UPI u;
    CreditCard c;
    PayPal pp;

    p = &u;
    p->pay();

    p = &c;
    p->pay();

    p = &pp;
    p->pay();

    return 0;
}