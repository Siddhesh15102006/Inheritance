// Exp - 14
// Siddhesh
// 25070123505

#include <iostream>
using namespace std;

class Gadget {
protected:
    string brand;
public:
    void setBrand(string b) { brand = b; }
};

class Smartphone : public Gadget {
protected:
    string model;
public:
    void setModel(string m) { model = m; }
};

class GamingSmartphone : public Smartphone {
    int battery; // in mAh
    int ram;     // in GB
    int storage; // in GB
public:
    void setSpecs(int b, int r, int s) {
        battery = b;
        ram = r;
        storage = s;
    }
    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Battery: " << battery << "mAh" << endl;
        cout << "RAM: " << ram << "GB" << endl;
        cout << "Storage: " << storage << "GB" << endl;
    }
};

int main() {
    GamingSmartphone gs;
    gs.setBrand("Asus");
    gs.setModel("ROG Phone 6");
    gs.setSpecs(6000, 12, 256);
    gs.display();
    return 0;
}

Output :-
Brand :- Nothing
Model :- Phone 3
Battery :- 6000mAh
RAM :- 12GB
Storage :- 256GB


=== Code Execution Successful ===
