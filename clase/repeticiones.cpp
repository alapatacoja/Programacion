#include <iostream>
using namespace std;

int contar(int arr[], int target, int size, int i) {
    if (i == size) {


























        
        return 0;
    } else{
        if(arr[i] == target){
            return 1 + contar(arr, target, size, i+1);
        } else{
            return contar(arr, target, size, i+1);
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 2, 5};
    return 0;
}
