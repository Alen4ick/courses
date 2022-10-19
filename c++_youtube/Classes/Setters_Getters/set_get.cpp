#include<iostream>

// Нам нужны сеттеры и геттеры, что изменять и узнавать значения полей из класса

class Square{
    public:
    Square() = default;
    Square(double param){
        side = param;
    }
    double square(){
        return side * side;
    }
    void set(double param){
        side = param;
    }
    double get(){
        return side;
    }
    private:
    double side{};
};
// Мы в паблик секции изменяем значения полей, которые располагаются в private секцииа
int main(){
    Square s1(5);
    s1.set(11);
    std::cout<<s1.get()<<std::endl;
    std::cout<<s1.square();
}