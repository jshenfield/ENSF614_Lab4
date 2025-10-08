/*
* File Name: EXC.cpp
* Assignment: Lab 4 Exercise C
* Lab Section: B01
* Completed by: Jack Shenfield & William Watson
* Submission Date: Oct 7, 2025
*/


// Class declaration similar to a .h file

using namespace std;
#include <string>

class Resizeable{

public:
    void enlarge (int n) = 0;
    void shrink (int n) = 0;

};

class Vehicle: public Resizeable, public Removeable{ // this class is abstract

protected:
    string name;

public:
    Vehicle(string name);
    virtual void move() = 0; // pure virtual

};

class Car final : public Vehicle{

private:
    int seats;

public:
    void turn();

};

class Moveable{

public:
    void forward() = 0; // pure virtual
    void backward() = 0; // pure virtual
};