---
# 🧪 Experiment 14 :- Inheritance in CPP

---

## 📖 Theory :-
Inheritance is one of the core concepts of Object-Oriented Programming (OOP). It allows a class (derived class) to inherit properties and behaviors (data members and member functions) from another class (base class).

⭐ Benefits of Inheritance:

Code reuse

Easier maintenance

Logical hierarchy

👨‍👩‍👧‍👦 Types of Inheritance in C++:

Single Inheritance – One base class, one derived class

Multiple Inheritance – Multiple base classes, one derived class

Hierarchical Inheritance – One base class, multiple derived classes

Multilevel Inheritance – One class inherits from another, which in turn inherits from another

---

### 📝 Experiment Questions and Code

---

## 🔹 Q1. Single Inheritance
✅ Syntax:

class Base {
    // members
};

class Derived : public Base {
    // inherits from Base
};

💡 Logic / Code:
```cpp
#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Eating..." << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Barking..." << endl;
    }
};

int main() {
    Dog d;
    d.eat();   // Inherited from Animal
    d.bark();  // Own method
    return 0;
}
```

---

## 🔹 Q2. Multiple Inheritance
✅ Syntax:
class Base1 {
    // members
};

class Base2 {
    // members
};

class Derived : public Base1, public Base2 {
    // inherits from Base1 and Base2
};

💡 Logic / Code:
```cpp
#include <iostream>
using namespace std;

class Teacher {
public:
    void teach() {
        cout << "Teaching..." << endl;
    }
};

class Writer {
public:
    void write() {
        cout << "Writing..." << endl;
    }
};

class Person : public Teacher, public Writer {
public:
    void introduce() {
        cout << "I am a person who can teach and write." << endl;
    }
};

int main() {
    Person p;
    p.teach();
    p.write();
    p.introduce();
    return 0;
}
```

---

## 🔹 Q3. Hierarchical Inheritance
✅ Syntax:
class Base {
    // members
};

class Derived1 : public Base {
    // inherits from Base
};

class Derived2 : public Base {
    // inherits from Base
};

💡 Logic / Code:
```cpp
#include <iostream>
using namespace std;

class Vehicle {
public:
    void start() {
        cout << "Vehicle started..." << endl;
    }
};

class Car : public Vehicle {
public:
    void drive() {
        cout << "Driving car..." << endl;
    }
};

class Bike : public Vehicle {
public:
    void ride() {
        cout << "Riding bike..." << endl;
    }
};

int main() {
    Car c;
    Bike b;
    c.start();
    c.drive();
    b.start();
    b.ride();
    return 0;
}
```

---

## 🔹 Q4. Multilevel Inheritance
✅ Syntax:
class Base {
    // members
};

class Intermediate : public Base {
    // inherits from Base
};

class Derived : public Intermediate {
    // inherits from Intermediate (and transitively from Base)
};

💡 Logic / Code:
```cpp
#include <iostream>
using namespace std;

class Grandparent {
public:
    void legacy() {
        cout << "Family legacy..." << endl;
    }
};

class Parent : public Grandparent {
public:
    void guidance() {
        cout << "Parental guidance..." << endl;
    }
};

class Child : public Parent {
public:
    void play() {
        cout << "Playing..." << endl;
    }
};

int main() {
    Child c;
    c.legacy();   // From Grandparent
    c.guidance(); // From Parent
    c.play();     // From Child
    return 0;
}
```

---

✅ Conclusion:

We successfully implemented all four types of inheritance in C++:

Single
Multiple
Hierarchical
Multilevel

Inheritance enhances code reuse, supports extensibility, and encourages a logical structure in programs.

Understanding inheritance is essential for building scalable and maintainable object-oriented applications.
