#include<iostream>
#include<string>
template <typename T>
T maximum(T a, T b){
    return (a > b) ? a : b;
}

int main(){
    int a{10};
    int b{23};
    double c{34.7};
    double d{23.4};
    std::string e{"hello"};
    std::string g{"world"};

    auto max = maximum(a, b); // Так он автоматически определяет типы a и b

    // приведем случай когда ломается, т.к аргументы будут разных типов

    //auto max_1 = maximum(a, c); // a : int, c : double

    // Для этого есть emplicit выбор типа
    auto max2 = maximum <double> (a, c); // Так a, c  приведутся к double и создастся шаблон для double
    
    // но если указать заранее такой шаблон, что тип аргументов не будет поддерживать конвертацию в другой тип, то все сломается
    // к примеру
    // auto max3 = maximum <double> (a, g); т.к g не может стать double


}
