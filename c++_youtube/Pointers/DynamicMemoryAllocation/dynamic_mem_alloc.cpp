#include <iostream>

int main(){
    // Мы раньше использовали указатели вот так
    int number{6};
    int* p_number = &number;
    std::cout<<std::endl;
    std::cout<<"Declaring pointer and assigning address : " <<std::endl;
    std::cout<<"number : "<<number<<std::endl;
    std::cout<<"p_number : "<<p_number<<std::endl;
    std::cout<<"&number : "<<&number<<std::endl;
    std::cout<<"*p_number : "<<*p_number<<std::endl;

    //также указатель без инициализации
    int* pointer;
    int value{12};
    pointer = &value;
    std::cout<<std::endl;
    std::cout<<"Uninitialized pointer : "<<std::endl;
    std::cout<<"*pointer : "<<*pointer<<std::endl;

    //НЕ ДЕЛАТЬ ТАК КАК СНИЗУ!!!
    /* int*p_number2; //Содержит какой-то непонятный адрес
    *p_number2 = 55;// мы изменяем значение этого непонятного адреса, что может быть опасно
    std::cout<<std::endl;
    std::cout<<"Writing into uninitialized pointer "<<std::endl;
    std::cout<<p_number2<<std::endl;
    std::cout<<"*p_number2 : "<<*p_number2<<std::endl;
 */
    // Также не стоит делать как написано ниже
    /* int*ptr{}; */ //Здесь все норм, инициализая к nullptr
    //*ptr = 4; // мы записываем значение в nullptr, что делать не надо


    //DYNAMIC heap memory, ради чего мы здесь собственно и собрались
    int *p_number4{nullptr};
    p_number4 = new int;
    // Тут мы динамически выделили память в КУЧЕ на 4-байтный инт
    // Это память теперь принадлежит только нам, система не может ее использовать
    // Эта память освободится, только когда мы применим delete
    // также мы можем обращаться как указателю и его значению в любой части программы
    // никакие области видимости нам не мешают, потому что обращаемся напрямую по адресу в Куче

    *p_number4 = 77; // Мы записывам в динамическую память значение 77 по адресу p_number4
    std::cout<<"Dynamically allocating memory : "<<std::endl;
    std::cout<<"*p_number4 : "<<*p_number4<<std::endl;

    delete p_number4; //Освобождаем память в куче 
    p_number4 = nullptr; // Теперь по адресу нашего указателся nullptr
    // так нужно делать каждый раз


    // Также можно инициализировать указатели 
    int *p_number5{new int}; // Мы выделили в куче память для инта, значение там мусорное
    int *p_number6{new int (22)}; // тоже самое, только значение 22 поставили
    int *p_number7{new int {23}};

    std::cout<<"Initialize with a valid memory address at declaration : "<<std::endl;
    std::cout<<"p_number5 : "<<p_number5<<std::endl;
    std::cout<<"*p_number5 : "<<*p_number5<<std::endl;
    std::cout<<"p_number6 : "<<p_number6<<std::endl;
    std::cout<<"*p_number6 : " <<*p_number6<<std::endl;
    std::cout<<"p_number7 : "<<p_number7<<std::endl;
    std::cout<<"*p_number 7 : "<<*p_number7<<std::endl;


    //Remembeer to release memory
    delete p_number5;
    p_number5 = nullptr;
    delete p_number6;
    p_number6 = nullptr;
    delete p_number7;
    p_number7 = nullptr;

    // Мы по-прежнему можем использовать наши указатели в программе
    // мы просто освободили место по их адресу
    // можно по другому адресу записать значения
    p_number6 = new int{18};
    std::cout<<"*p_number6 : "<<*p_number6<<std::endl;
    delete p_number6;
    p_number6 = nullptr;
}