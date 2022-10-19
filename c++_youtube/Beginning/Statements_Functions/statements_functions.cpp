#include <iostream>

int sum_( int number1, int number2){
    
    int result = number1 + number2;
    return result;
}
int main(){

    int first_number {3}; // Statement
    int second_number{7}; 

    std::cout << "First number :" << first_number << std::endl;
    std::cout << "Second number :" << second_number << std::endl;

    int sum = sum_(first_number, second_number);
    std::cout<< "The sum is " << sum << std:: endl;

    std::cout<< "another sum is "<< sum_(12, 23)<<std::endl;
}