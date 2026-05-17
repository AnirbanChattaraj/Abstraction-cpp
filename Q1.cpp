//Shape System
#include<iostream>
using namespace std;
class Shape{
    public:
    virtual void draw()=0;
};
class Circle: public Shape{
    public:
    void draw(){
        cout<<"Circular"<<endl;
    }
};
class Rectangle: public Shape{
    public:
    void draw(){
        cout<<"Rectangle"<<endl;
    }
};
class Triangle: public Shape{
    public:
    void draw(){
        cout<<"Triangular"<<endl;
    }
};
int main(){
    Shape* s;
    Circle c;
    Rectangle r;
    Triangle t;
    s=&c;
    s->draw();
    s=&r;
    s->draw();
    s=&t;
    s->draw();

}