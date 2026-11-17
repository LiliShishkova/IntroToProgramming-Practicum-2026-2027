#include <iostream>

void multiplyPolynomials(int poly1[], int n, int poly2[], int m, int poly3[]){
    for (int i = 0; i < n + m - 1; i++){
        poly3[i] = 0;
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            poly3[i + j] += poly1[i] * poly2[j];
        }
    }
}

int main(){
    int n, m;

    std::cout << "Enter first n and m and then poly1 and poly2: ";
    std::cin >> n >> m;

    int poly1[128];
    int poly2[128];
    int poly3[255];

    for (int i = 0; i < n; i++){
        std::cin >> poly1[i];
    }

    for (int i = 0; i < m; i++){
        std::cin >> poly2[i];
    }
    multiplyPolynomials(poly1, n, poly2, m, poly3);

    for (int i = 0; i < n + m - 1; i++){
        std::cout << poly3[i] << " ";
    }
}