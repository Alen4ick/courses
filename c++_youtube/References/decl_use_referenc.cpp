#include<iostream>

int main(){
    int int_data{33};
    double double_data{55};

    //References альтернативное имя переменной
    int& ref_int_data{int_data};
    double &ref_double_data{double_data};
    // не важно где стоит значок
    std::cout<<ref_double_data<<std::endl;
    std::cout<<sizeof(int_data);
}