#include "class.h"

A::A() {
    cout << "Constructed" << endl;
    a = 0;
}

A::A(const A& ref) {
    cout << "Copied" << endl;
    a = ref.a + 1;
}

A::~A() {
    cout << "Deleted" << endl;
    cout << "A is " << a << endl;
}

void A::foo() {
    a += 2;
}

void f1(A a) {
    A b = a;
    b.foo();
    a.foo();
}
void f2(A& a) {
    A *b = &a;
    a.foo();
    (*b).foo();
}
A f3(A a) {
    a.foo();
    A b = a;
    return b;
}
A f4(A a) {
    a.foo();
    A b = a;
    b.foo();
    return b;
}
A& f5(A &a) {
    return a;
}
