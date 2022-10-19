#include<iostream>
#include<concepts>

template<typename T >
concept TinyType = requires(T t){
    requires sizeof(T) <=4;
};

template <typename T>
T func(T t) requires std::integral<T> && TinyType<T>{
    std::cout<<"value : "<<t<<std::endl;
    return (2*t);
}
// To combine concepts you can use && or || logical operators

int main(){
    // Код ниже не получится собрать, потому что х не удовлетворяет условие концепции
    /* double x;
    int ans = func(x); */
    long long int x{5};
    /* auto ans = func(x); */// Не получится, хоть и целое число, но провалится условие на TinyType
}