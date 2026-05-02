/**
 * Project: Vehicle Inheritance System
 * Concept: Inheritance and Method Overriding
 */

#include <iostream>
#include <string>
using namespace std;

// Parent Class
class Vehicle {
protected:
    string brand;
    int year;

public:
    Vehicle(string b, int y) : brand(b), year(y) {}

    void displayBaseInfo() {
        cout << "Brand: " << brand << " | Year: " << year << endl;
    }
};

// Child Class inheriting from Vehicle
class Car : public Vehicle {
private:
    int doorCount;

public:
    Car(string b, int y, int d) : Vehicle(b, y), doorCount(d) {}

    void displayCarDetails() {
        displayBaseInfo();
        cout << "Doors: " << doorCount << " | Type: Passenger Car" << endl;
    }
};

int main() {
    Car myCar("Toyota", 2024, 4);
    cout << "--- Vehicle Inheritance Records ---" << endl;
    myCar.displayCarDetails();
    return 0;
}
