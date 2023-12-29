#include <iostream>
main() {
    int f1, f2, fib, i, n;
    f1 = 1;
    f2 = 1;
    std::cin >> n;
    std::cout << "fib1 : 1\n" << "fib2 : 1\n";
    for (i = 3; i <= n; i++) {


        fib = f1 + f2;
        f1 = f2;
        f2 = fib;
        std::cout << "fib" << i << ":" << fib << "\n";
    }
}