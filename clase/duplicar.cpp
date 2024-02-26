#include <iostream>

void duplicar(int a[], int desde, int hasta){
    if(desde == hasta){
        a[desde] = a[desde]*2;
    } else {
        a[desde] = 2*a[desde];
        duplicar(a, desde+1, hasta);
    }
}

int main() {
    
    return 0;
}
