#include <iostream>
using namespace std;

class Machine
{
private:
    int id;

public:
    Machine() : id(0) { cout << "Machine no-argument constructor called." << endl; };
    // Parametrized constructor
    Machine(int id) : id(id) { cout << "Machine parametrized constructor called." << endl; };
    void info() { cout << "Id: " << id << endl; }
};

class Vehicle : public Machine
{
public:
    Vehicle() { cout << "Vehicle parametrized constructor called." << endl; };
    // Calling inherited parametrized Machine constructor with inputted id.
    Vehicle(int id) : Machine(id) { cout << "Vehicle no-argument constructor called." << endl; };
};

class Car : public Vehicle
{
public:
    // Calling parametrized Vehicle->Machine constructor with default id.
    Car() : Vehicle(999) { cout << "Car no-argument constructor called." << endl; };
};

int main()
{
    Machine machine(123);
    machine.info();

    Vehicle vehicle(234);
    vehicle.info();

    Car car;
    car.info();

    return 0;
}