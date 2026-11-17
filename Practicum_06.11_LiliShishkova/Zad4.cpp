#include <iostream>

bool isZigZag(int arr[], int n){
    for (int i = 0; i < n - 1; i++){
        if (i % 2 == 0) {
            if (arr[i] >= arr[i + 1]){
                return false;
            }
        }
        else{
            if (arr[i] <= arr[i + 1]){
                return false;
            }
        }
    }
    return true;
}

int main(){
    int n;
    std::cin >> n;

    int arr[128];

    for (int i = 0; i < n; i++){
        std::cin >> arr[i];
    }
    if (isZigZag(arr, n)){
        std::cout << "true";
    }
    else{
        std::cout << "false";
    }
}