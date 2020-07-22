#include <iostream>
using namespace std;

class Vehicle
{
private:
    string name;
    int nWheels;

public:
    // Constructor 1
    Vehicle()
    {
        name = "";
        nWheels = 0;
        cout << "Vehicle created. " << endl;
    }

    // Constructor 2
    Vehicle(string newName, int newWheels)
    {
        name = newName;
        nWheels = newWheels;
        cout << "Vehicle created. " << endl;
    }

    // Destructor
    ~Vehicle()
    {
        cout << "Vehicle destroyed.\n" << endl;
    }

    // Setter
    void setName(string name)
    {
        this->name = name;
    }

    // Getters
    void getName()
    {
        cout << "Vehicle: " << name << endl;
    }

    int getWheels()
    {
        cout << "Number of wheels: " << nWheels << endl;
        return nWheels;
    }

    int doubleWheels(int newWheels)
    {
        this->nWheels = newWheels;
        return nWheels * 2;
    }
};

int main()
{
    // Car (using Constructor 1)
    {
        Vehicle car;
        car.setName("Car");
        car.getName();
        car.getWheels();
    }

    // Truck (using Constructor 2)
    {
        Vehicle truck("Truck", 6);
        truck.getName();
        int nWheels = truck.getWheels();

        //int dWheels = truck.doubleWheels(truck.getWheels());
        cout << "Double wheels: " << truck.doubleWheels(nWheels) << endl;
    }

    // New command
    {
        Vehicle *pBicycle = new Vehicle("Bicycle", 2);
        pBicycle->getName();
        pBicycle->getWheels();
        delete pBicycle;
    }

    return 0;
}