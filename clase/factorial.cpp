#include <iostream>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main(){
    int resFact = factorial(3);
    std::cout << "resultado: " << resFact << std::endl;
}