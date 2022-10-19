#include<iostream>

int main(){

    // Ternar operator - очень мощная штука, заменяет также условия и делает их в 1 строку
    // К Примеру, нам нужно выбрать максимум из 2 чисел
    int a{10};
    int b{2};
    int max = {a>b?a:b};
    std::cout<<"The max : "<<max;
}