#include<iostream>

const double pi{3.14};
class Cylinder{
    //Constructors
    public:
    // Конструктор должен называться также как и сам класс
    // У нас по умолчанию всегда есть пустой конструктор
    Cylinder(){
        base_radius = 2.0;
        height = 10;
    }
    Cylinder(double first_param, double second_param){
        base_radius = first_param;
        height = second_param;
    }
public:
    double volume(){
        return pi * base_radius * base_radius * height;
    }
private:
    double base_radius{};
    double height{};
};

int main(){
    Cylinder cylinder;
    std::cout<<"volume : "<<cylinder.volume()<<std::endl;
    Cylinder cylinder2(1, 5);
    std::cout<<"volume :"<<cylinder2.volume()<<std::endl;

}