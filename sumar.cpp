#include <iostream>

double sumar(double a[], int t, int ini){
    if(ini == t){
        return 0; //caso base
    } else{ //caso recursivo
        return a[ini] + sumar(a, t, ini+1);
    }
}


int main() {
    double a[] = {20,30,12,20,10,00,30};
    double res = sumar(a, 7, 0);
    return 0;
}
