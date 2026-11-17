#include <iostream>

int gcd(int num1, int num2){
    while (num2 != 0) {
        int temp = num1 % num2;

        num1 = num2;
        num2 = temp;
    }
    return num1;
}

int arrayGCD(int arr[], int n){
    int result = arr[0];

    for (int i = 1; i < n; i++){
        result = gcd(result, arr[i]);
    }
    return result;
}

int main(){
    int n;
    std::cin >> n;

    int arr[16];

    for (int i = 0; i < n; i++){
        std::cin >> arr[i];
    }

    std::cout << arrayGCD(arr, n);
}