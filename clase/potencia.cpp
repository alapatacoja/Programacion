#include <iostream>

int potencia(int a, int n) {
    if(n==0){ //caso base
        return 1;
    } else { //caso general
        return a*potencia(a,n-1);
    }
}

int main(){
    int result = potencia(2,5);
    std::cout << "resultado: " << result << std::endl;
}