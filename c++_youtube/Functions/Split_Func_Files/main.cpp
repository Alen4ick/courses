#include <iostream>
#include "compare.h" // Preprocessor

int main(){
    int maximum = max(12, 123);
    std::cout<<"maximum is "<<maximum<<std::endl;

    int minimum = min(12, 123);
    std::cout<<"minimum is "<<minimum<<std::endl;
}