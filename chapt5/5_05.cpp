#include "Fibonacci.h"

extern ostream &operator<<(ostream &os, const num_sequence &ns);

int main() {
    Fibonacci fib;

    cout << "fib: beginning at element 1 for 1 element: "
        << fib << endl;
    
    Fibonacci fib2(16);
    cout << "fib2: beginning at element 1 for 16 elements: "
        << fib2 << endl;

    Fibonacci fib3(8, 12);
    cout << "fib3: begining at element 12 for 8 elements: "
        << fib3 << endl;
}