#include<iostream>


int main(){
    // Addition
    int number1{2};
    int number2{7};

    int result = number1 + number2;

    std::cout<<"result : " <<result<<std::endl;


    //Substraction
    result = number2 - number1;
    
    std::cout<<"result : "<< result<<std::endl;


    //Multiplication
    result = number1 * number2;
    std::cout<<"result : "<<result<<std::endl;

    //Division
    result = number2 / number1; //Деление нацело, т.к result integer
    std::cout <<"result : "<<result<<std::endl;

    //Modulos
    result = number2 % number1;
    std::cout<<"result : "<<result<<std::endl;
}