#include <iostream>

int countInversions(int arr[], int n){
    int count = 0;

    for (int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
            if (arr[i] > arr[j]) {
                count++;
            }
        }
    }
    return count;
}

int main(){
    int n;
    std::cin >> n;

    int arr[256];

    for (int i = 0; i < n; i++){
        std::cin >> arr[i];
    }
    std::cout << countInversions(arr, n);
}