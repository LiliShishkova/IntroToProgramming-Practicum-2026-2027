#include <iostream>

int AbsValue(int num){
    if (num < 0) {
        return -num;
    }
    return num;
}

int maxManhattanDistance(int x[], int y[], int n){
    int maxDistance = 0;

    for (int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
            int distance = AbsValue(x[i] - x[j]) + AbsValue(y[i] - y[j]);

            if (distance > maxDistance){
                maxDistance = distance;
            }
        }
    }
    return maxDistance;
}

int main() {
    int n;
    std::cin >> n;

    int x[128];
    int y[128];

    for (int i = 0; i < n; i++){
        std::cin >> x[i];
    }

    for (int i = 0; i < n; i++){
        std::cin >> y[i];
    }
    std::cout << maxManhattanDistance(x, y, n);
}