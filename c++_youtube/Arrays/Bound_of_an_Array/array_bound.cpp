#include<iostream>

int main() {
    int numbers[] {1, 2, 3, 4, 5, 6, 7};
    //Можно читать значения, которые находятся за границей массива
    std::cout<<"number[12] : "<<numbers[12]<<std::endl;

    numbers[12] = 1000;
    std::cout<<"numbers[12] : "<<numbers[12]<<std::endl;
}