#include<iostream>

int main(){
    //Capture by value
    /* int c{10};
    // Символ "=" обозначает, что мы копируем все, что находится за пределами функции
    auto func = [=](){
        std::cout<<"Inner value : "<<c<<std::endl;
    };

    for(size_t i{}; i < 5; i++){
        std::cout<<"Outer value : "<<c<<std::endl;
    func();
    c++;
    } */

    //Capture by reference

    int c{10};
    // Символ "&" обозначает, что мы получаем доступ по ссылкам ко всему, что снаружи
    auto func = [&](){
        std::cout<<"Inner value : "<<c<<std::endl;
    };

    for(size_t i{}; i < 5; i++){
        std::cout<<"Outer value : "<<c<<std::endl;
    func();
    c++;}
}