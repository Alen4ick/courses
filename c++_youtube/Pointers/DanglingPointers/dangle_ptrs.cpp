#include<iostream>

int main(){
    // CASE1 : Uninitialized pointer
    int *p_number;
    std::cout<<"CASE1 : Uninitialized pointer : "<<std::endl;
    std::cout<<"p_number : "<<p_number<<std::endl; // Мы не знаем какой там адрес внутри, не стоит так далать
    //Solution - Проинициализровать nullptr или нормальным адресом перед использованием
    
    // CASE2 : Deleted pointer
    std::cout<<"CASE2 : Deleted pointer"<<std::endl;
    int *p_number1 {new int{67}};
    //Мы будем смотреть значение, которое удалили, следовательно внутри будет мусор
    std::cout<<"*p_number1 (before delete) : "<<*p_number1<<std::endl;
    //Solution после удаления надо присваивать им nullptr 

    delete p_number1;
    std::cout<<"*p_number1(after delete) : "<<*p_number1<<std::endl;
    
    std::cout<<"CASE3 : Multiple ptr pointing to the same address : "<<std::endl;

    int *p_number2{new int{83}};
    int *p_number3{p_number2};
    std::cout<<"p_number2 - "<<p_number2<<" - "<<*p_number2<<std::endl;
    std::cout<<"p_number3 - "<<p_number3<<" - "<<*p_number3<<std::endl;
    // Deleting p_number2
    delete p_number2;

    std::cout<<"p_number3(after deleting p_number2) : "<<p_number3<<" - "<<*p_number3<<std::endl;
}