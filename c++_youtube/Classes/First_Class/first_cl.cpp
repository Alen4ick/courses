#include<iostream>

const double pi{3.14159265};

class Cylinder{
    // Members can't be references
    // methods have access to the member variables, regardless of
    // whether they are public or private
    public:
    double volume(){
        return pi * base_radius * base_radius * height;
    }
    // Member variables
    public:
    double height{};
    double base_radius{};

};

int main(){
    Cylinder cylinder;
    /* std::cout<<"volume : "<<cylinder.volume()<<std::endl; */ // не получается отсюда получить доступ 
    // к этому полю, потому что оно по умолчанию private
    std::cout<<"volume : "<<cylinder.volume()<<std::endl; // А тут я изменил на public и получилось
    // Все что находится под public, становится доступным извне
    // Желательно наши переменные делать private, это такой красивый тон

    cylinder.base_radius = 5;
    cylinder.height = 10;
    std::cout<<"volume : "<<cylinder.volume()<<std::endl;
}
