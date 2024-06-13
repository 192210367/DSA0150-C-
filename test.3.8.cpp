#include <iostream>
#include <cstring>
using namespace std;

class Ele_Bill {
private:
    char Cname[50];
    long Pnumber;
    int No_of_Units;
    float Amount;

public:
    Ele_Bill(const char* name, long number, int units) : Pnumber(number), No_of_Units(units) {
        strcpy(Cname, name);
        Amount = No_of_Units * 5.5; // Assuming rate per unit is 5.5
    }

    void display() {
        cout << "Customer Name: " << Cname << endl;
        cout << "Phone Number: " << Pnumber << endl;
        cout << "Number of Units: " << No_of_Units << endl;
        cout << "Amount: " << Amount << endl;
    }
};

int main() {
    Ele_Bill bill("John Doe", 1234567890, 100);
    bill.display();
    return 0;
}
