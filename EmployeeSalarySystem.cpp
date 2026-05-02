/**
 * Project: Employee Salary Management System
 * Author: Aisha Riaz
 * Description: Demonstrates OOP principles including Encapsulation, 
 * Parameterized Constructors, and Member Functions.
 */

#include <iostream>
#include <string>
#include <iomanip> // For formatting currency output

using namespace std;

class Employee {
private:
    double employeeID;
    string employeeName;
    double basicSalary;
    double netSalary;

public:
    // Parameterized Constructor
    Employee(double id, string name, double salary) {
        this->employeeID = id;
        this->employeeName = name;
        this->basicSalary = salary;
        this->netSalary = 0.0;
    }

    // Method to handle business logic calculations
    void calculateSalary() {
        double allowance = basicSalary * 0.20; // 20% Allowance
        double deduction = basicSalary * 0.05; // 5% Deduction
        netSalary = basicSalary + allowance - deduction;
    }

    // Method to display formatted employee data
    void displayInfo() {
        cout << "\n----- Employee Record -----" << endl;
        cout << "Name:           " << employeeName << endl;
        cout << "ID:             " << employeeID << endl;
        cout << fixed << setprecision(2); // Formats numbers to 2 decimal places
        cout << "Basic Salary:   $" << basicSalary << endl;
        cout << "Net Salary:     $" << netSalary << endl;
        cout << "---------------------------\n" << endl;
    }
};

int main() {
    // Creating an object of the Employee class
    Employee emp1(101, "Aisha", 120000.0);

    // Core logic sequence
    emp1.calculateSalary(); 
    emp1.displayInfo();

    return 0;
}
