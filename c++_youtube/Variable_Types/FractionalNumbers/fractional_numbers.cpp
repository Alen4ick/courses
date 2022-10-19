#include <iostream>
#include <iomanip>
//  
int main(){
    // Declare and initialize variables
    float number1 {1.12345678901234567890f};
    double number2 {1.12345678901234567890};
    long double number3 {1.12345678901234567890L};

    //Print out the sizes
    std::cout<<"sizeof float : " <<sizeof(float)<<std::endl;
    std::cout<<"sizeof double : "<<sizeof(double)<<std::endl;
    std::cout<<"sizeof long double : "<<sizeof(long double) <<std::endl;


    //Precision
    std::cout<<std::setprecision(20); // Контроль точности из std::cout
    std::cout<<"number1 is : "<<number1<<std::endl;//7 digits имеется в виду, 
    //что первые 7 цифр 
    //после точки правильные, а остальное мусор    
    std::cout<<"number2 is : "<<number2<<std::endl;//15 digits
    std::cout<<"number3 is : "<<number3<<std::endl;//15+ digits

    //Проблемы инициализации
    float number4 {192343232543252.0f}; //Компилятор переведет в double
    // первые 7 цифр будут правильные, остальное фигня
    // убедимся в этом на выводе
    std::cout<<"number4 is : "<<number4<<std::endl;

    float number6(1.232352323f); // запихнет всякий мусор после нашего числа
    std::cout<<"number6 : "<<number6<<std::endl;

    //Также можно использовать e^n, что будет обозначать 10 ^ n
    double number {1.12e8};
    std::cout<<"number : "<<number<<std::endl;

    double number7 {0.000000034}; //комплиятор выведет с точкой в начале
    // но "е" с отрицательной степенью
    std::cout<<"number7 : "<<number7<<std::endl;


    // Infinity and Nan
    std::cout<<std::endl;
    std::cout<<"Infinity and Nan"<<std::endl;

    double number10{5.6};
    double number11{};//Initialized to 0
    double number12{}; //Initialized to 0

    //Inifinity
    double result {number10/number11};
    
    std::cout<<number10<<"/"<<number11<<" yields "<<result<<std::endl;
    std::cout<<result<<" + "<<number10<<" yields "<<result + number10<<std::endl;

    //Nan
    result = number11/number12;


} 
