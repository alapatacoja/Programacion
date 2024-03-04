#include <iostream>

int distintoCero(int a[], int tamanyo, int ini){
    if(ini>=tamanyo-1){
        return -1;
    } else {
        if(a[ini]!=0){
            return ini;
        } else {
            return distintoCero(a, tamanyo, ini+1);
        }
    }
}

int main() {
    
    return 0;
}
