#include <iostream>
using namespace std;

double calculateTax(double salary) {
    double tax = 0.0;

    if (salary <= 180000) {
        tax = salary * 0.05;
    } else if (salary <= 300000) {
        tax = salary * 0.07;
    } else if (salary <= 500000) {
        tax = salary * 0.10;
    } else if (salary <= 750000) {
        tax = salary * 0.12;
    } else {
        tax = salary * 0.15;
    }

    return tax;
}

int main() {
    double salary;

    cout << "Enter the annual salary: ";
    cin >> salary;

    double tax = calculateTax(salary);

    cout << "The income tax for a salary of " << salary << " is: " << tax << endl;

    return 0;
}
