class A {
    int a[100];
    public:
        A(int q) {for (int i = 0; i < 100; i++) {a[q] = i;}}
        ~A() {delete [] a;}
        void foo();
}
