#include<iostream>
// capture list нужен, чтобы вы могли пользоваться переменными за пределами функции

int main(){
    double a{10};
    double b{15};

    auto func = [a, b] () {
        std::cout<<"a + b : "<<a + b<<std::endl;
    };
    func();

    // Захватывать переменные можно как по значению, так и по ссылке соответственно 
    
    int c{42};
    // Тут копируется переменная по значению 42 и будет выводить только она
    auto func1 = [c] (){
        std::cout<<"Inner value address:  "<<&c<<std::endl;
    };

    for(size_t i{}; i < 5; ++i){
        std::cout<<"Outer value address : "<<&c<<std::endl;
        func1();
        ++c;
    }

    // Теперь передадим по ссылке

    int x{8};

    auto func2 = [&x](){
        std::cout<<"Inner value : "<<x<<std::endl;
    };
    for(size_t i{}; i < 5; ++i){
        std::cout<<"Outer value : "<<x<<std::endl;
        func2();
        ++x;
    }

}