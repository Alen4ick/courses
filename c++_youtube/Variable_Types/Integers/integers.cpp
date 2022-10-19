#include <iostream>


int main(){


    // ИНИЦИАЛИЗАЦИЯ ЧЕРЕЗ ФИГУРНЫЕ СКОБКИ
    
    
    int number; // может содержать внутри всякую фигню
    std::cout<<number<<std::endl;
    int number2{}; // Изначально инициализация 0
    std::cout<<number2<<std::endl;
    int number3{10};
    int number4{23};
    int sum_{number3 + number4}; //Так тоже можно делать

    // int d{2.9};  будет compile error, если попробовать собрать.

    // int new_{doesnt_exist}; Тоже не получится собрать


    //ФУНКЦИОНАЛЬНАЯ ИНИЦИАЛИЗАЦИЯ
    
    
    int apple_count(5);
    int orange_count(10);
    int fruit_count (apple_count + orange_count);
    int number5(2.9); // Не следует делать, т.к автоматически инициализирует
    // 2, то есть меньше целое число
    std::cout<<number5<<std::endl;


    // ИНИЦИАЛИЗАЦИЯ ЧЕРЕЗ =


    int bike_count = 2;
    std::cout<<"bike_count = "<<bike_count<<std::endl;
    int truck_count = 7;
    int vehicle_count = bike_count + truck_count;
    int number6 = 2.9;// Не следует делать, т.к сокращает как и ()
    std::cout<<number6<<std::endl;

    // Посмотреть сколько памяти занимают переменные
    std::cout<<"size of int(bytes) : "<<sizeof(int)<<std::endl;
    std::cout<<"size of bike_count : "<<sizeof(bike_count)<<std::endl;

}