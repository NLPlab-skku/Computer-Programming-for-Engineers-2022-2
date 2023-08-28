#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
    public:
        virtual void move() { cout << "Vehicle: move" << endl;}
};

class Car: public Vehicle
{
    public:
        void move() { cout << "Car: move with 4 wheels" << endl;}
};

class Bicycle: public Vehicle
{
    public:
        void move() { cout << "Bicycle: move with 2 wheels" << endl;}
};

int main(void)
{
    Vehicle* vehicle = new Vehicle;
    vehicle->move();

    Vehicle* car = new Car;
    car->move();

    Vehicle* bicycle = new Bicycle;
    bicycle->move();

    return 0;
}