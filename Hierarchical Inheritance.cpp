// Exp - 14
// Siddhesh 
// 25070123505 (A3)

#include <iostream>
using namespace std;

class Vehicle {
protected:
    string company;  // Changed to lowercase 'company' for consistency
public:
    void setCompany(string c) { company = c; }  // Setter name updated
};

class Car : public Vehicle {
    int seats;
public:
    void setCar(int s) { seats = s; }
    void display() {
        cout << "Car Company: " << company << ", Seats: " << seats << endl;
    }
};

class Bike : public Vehicle {
    int cc;
public:
    void setBike(int c) { cc = c; }
    void display() {
        cout << "Bike Company: " << company << ", CC: " << cc << endl;
    }
};

class Scooter : public Vehicle {
    double sittingCapacity;
public:
    void setScooter(double capacity) { sittingCapacity = capacity; }
    void display() {
        cout << "Scooter Company: " << company << ", Sitting Capacity: " << sittingCapacity << endl;
    }
};

class Cycle : public Vehicle {
    int passengers;
public:
    void setCycle(int p) { passengers = p; }
    void display() {
        cout << "Cycle Company: " << company << ", Passengers: " << passengers << endl;
    }
};

int main() {
    Car c;
    Bike b;
    Scooter t;
    Cycle bus;

    c.setCompany("MG");       // Changed from setBrand to setCompany
    c.setCar(5);
    c.display();

    b.setCompany("KTM");
    b.setBike(1500);
    b.display();

    t.setCompany("Activa 6G");
    t.setScooter(2);
    t.display();

    bus.setCompany("Hero Sprint");
    bus.setCycle(1);
    bus.display();

    return 0;
}

Output :-
Car Company: MG, Seats: 5
Bike Company: KTM, CC: 1500
Scooter Company: Activa 6G, Sitting Capacity: 2
Cycle Company: Hero Sprint, Passengers: 1


=== Code Execution Successful ===
