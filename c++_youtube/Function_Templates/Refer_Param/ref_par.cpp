#include<iostream>
// Вместо копирования передаем аргументы по ссылкам.
template<typename T> const T& maximum(const T& a, const T& b);

// ВАЖНО, если у вас есть функция by value и такая же by ref, то это не перегрузка, это compile error

int main(){

    double a{23.5};
    double b{51.2};

    std::cout<<"Out - &a : "<<&a<<std::endl;
    auto result = maximum(a, b);
    std::cout<<"Out - &a :"<<&a<<std::endl;



}
template <typename T> const T& maximum(const T& a, const T& b){
    std::cout<<"In - &a : "<<&a<<std::endl;
    return (a > b) ? a : b;
}