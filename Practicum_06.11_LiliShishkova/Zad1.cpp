#include <iostream>

const size_t SIZE = 100;

int main(){
    unsigned num;
    int avr; 
    int arr[SIZE];
    unsigned count = 0;

    std::cin >> num;

    for (int i = 0; i < num; i++){
        std::cin >> arr[i];
        avr += arr[i];
    }
    avr = avr / num;

    for (int i = 0; i < num; i++){
        if (arr[i] > avr){
            count++;
        }
    }

    std::cout << "Avarage: " << avr;
    
    std::cout << "\n" << "Above avr: "<< count;
}