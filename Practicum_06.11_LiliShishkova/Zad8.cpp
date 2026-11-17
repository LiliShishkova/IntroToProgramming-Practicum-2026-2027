#include <iostream>

int binarySearch(int heights[], int n, int x){
    int left = 0;
    int right = n;

    while (left < right){
        int mid = (left + right) / 2;

        if (heights[mid] < x){
            left = mid + 1;
        }
        else{
            right = mid;
        }
    }
    return left;
}

int main(){
    int n;
    std::cin >> n;

    int heights[128];

    for (int i = 0; i < n; i++){
        std::cin >> heights[i];
    }
    int x;
    std::cin >> x;

    std::cout << binarySearch(heights, n, x);
}