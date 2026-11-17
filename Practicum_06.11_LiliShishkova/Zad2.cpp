#include <iostream>

long long scalarProduct(int a[], int b[], int n){
    long long result = 0;

    for (int i = 0; i < n; i++){
        result += (long long)a[i] * b[i];
    }
    return result;
}

int main(){
    int n;
    std::cin >> n;

    int arr1[128];
    int arr2[128];

    for (int i = 0; i < n; i++){
        std::cin >> arr1[i];
    }

    for (int i = 0; i < n; i++){
        std::cin >> arr2[i];
    }

    std::cout << scalarProduct(arr1, arr2, n);
}