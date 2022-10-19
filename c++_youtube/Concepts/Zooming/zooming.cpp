#include <iostream>
#include <concepts>
#include<typeinfo>
#include<string>

/* template<typename T>
concept TinyType  = requires(T t){
    sizeof(T) <=4;// Simple requirement : Onle enforces syntax
    requires sizeof(T) <=4; // Will not allow to compile if sizeof(T) > 4
};

TinyType auto add(TinyType auto a, TinyType auto b){
    return a + b;
}
 */
template<typename T>
concept Addable = requires(T a, T b){
    //noecept is optional
    {a + b}; /* noexcept-> std::convertible_to<int> *///; // Compound requirement
    // Check if a + b is valid syntax, doesn't throw exeptions(optional), and the result
    // is convertible to int(optional)
};

Addable auto add(Addable auto a, Addable auto b){
    return a + b;
}

int main(){
    /* char x{67};
    char y{56}; */
    
    std::string x{"Hello"};
    std::string y {"World"};
    // Здесь не будет ошибки, потому что char автоматически переводится в int когда ищем сумму
    auto ans = add(x, y);// Со строками возникает ошибка, потому что в функции есть доп условие
    // что результат можно перевести в int, в string нельзя
    std::cout<<"sizeof(ans) : "<<sizeof(ans)<<std::endl;
}