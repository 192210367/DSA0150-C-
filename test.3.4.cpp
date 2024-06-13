#include <iostream>
using namespace std;

class A {
public:
    int func(int x) { return x * 2; }
};

class B {
public:
    int func(int x) { return x * 3; }
};

class C {
public:
    int func(int x) { return x * 5; }
};

// Class D inherits from classes A, B, and C
class D : public A, public B, public C {
public:
    // By inheriting from A, B, and C, D inherits their respective func() methods.
    // We need to specify which version of func() we want to call by using the scope resolution operator (::)
    using A::func;
    using B::func;
    using C::func;
};

int main() {
    D d;

    // Here, we're using the func() method from class A
    cout << "Using func() from class A: " << d.func(2) << endl;

    // Here, we're using the func() method from class B
    cout << "Using func() from class B: " << d.func(2) << endl;

    // Here, we're using the func() method from class C
    cout << "Using func() from class C: " << d.func(2) << endl;

    return 0;
}

