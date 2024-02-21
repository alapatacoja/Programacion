#include <iostream>

int minimo(double a[], int t, int ini){
    if(ini == t){
        return 0; //caso base
    } else{ //caso recursivo
        int posmin = minimo(a, t, ini+1);
        if(a[posmin]<a[ini]){
            return posmin;
        } else{
            return ini;
        }
    }
}

int main() {

    
    return 0;
}
