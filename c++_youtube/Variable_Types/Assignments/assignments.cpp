#include<iostream>
int main(){
    //Assign - назначить, мы перезаписываем значение перменной
    int var{123}; //Declare and initialize
    std::cout<<"var : "<<var << std::endl;

    var = 55; //Assign
    std::cout<<"var : "<<var<<std::endl;

    //Auto
    auto var2{123u};
    var2 = -12; // Нельзя делать, т.к unigned
    //ошибки не будет, но запишется мусор
    std::cout<<"var2 : "<<var2<<std::endl;

}


