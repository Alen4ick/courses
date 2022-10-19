#include<iostream>

int main() {
    const char massiv[]{"Hello world"};// Создаем строковый литерал
    const char* ptr{};
    ptr = massiv;// Так как в памяти массив хранится как адрес 1 элемента, то мы в указатель пихаем адрес элемента "H"
    std::cout<<ptr<<std::endl;//Внутри языка так перегружен оператор, что выведется целый массив, а не адрес 1 элемента
    // хотя внутри хранится именно адрес 1 элемента
    std::cout<<*ptr<<std::endl;// а здесь мы раскрываем указатель и берем его содержимое(1 элемент)

    //можно сделать код гораздо проще, сразу проинициализировав указатель нашим массивом(адрес 1 элемента в памяти)
    const char* message{"Hi, Alen!"};//Стоит отметить, что по стандарты в строковом литерале значения
    // типа const char, то есть изменить указатель на char выдаст compile error
    std::cout<<"The message is : "<<message<<std::endl;
    std::cout<<"The *message is : "<<*message<<std::endl;
    //*message = "P" Compile Error
    // Нельзя сделать, потому что message это указатель на const char

    //Ниже код, чтобы изменить элемент массива
    //В с++ '.' Означает 1 символ (char), а "..."строковый литерал, который является const char
    char mass []{"Hi, Milena!"};
    mass[0]= 'B';
    std::cout<<"the mass is : "<<mass<<std::endl;



}
