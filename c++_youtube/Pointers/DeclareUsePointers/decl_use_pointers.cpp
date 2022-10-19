#include<iostream>

int main(){
    // Указатель это специальный вид переменной который хранит адрес

    // Declare and initialize pointers
    int *p_number{}; // Will initialize with nullptr
    double *p_fractional_number{};
    // Один указатель может хранить адрес только 1 типа, к которому привязан

    int *p_number1{nullptr};
    int *p_fractional_number1 {nullptr};

    // Указатели на разные типы имеют всегда одинаковый размер
    // так как хранят в себе адрес, который в памяти у всех переменных весит одинаково
    // щас мы это и проверим

    std::cout<<"sizeof(int) : "<<sizeof(int)<<std::endl;//4 bytes
    std::cout<<"sizeof(double) : "<<sizeof(double)<<std::endl;//8 bytes
    std::cout<<"sizeof(double*) : "<<sizeof(double*)<<std::endl;//8bytes
    std::cout<<"sizeof(int*) : "<<sizeof(int*)<<std::endl;
    std::cout<<"sizeof(p_number1) : "<<sizeof(p_number1)<<std::endl;
    std::cout<<"sizeof(p_fractional_number1) : "<<sizeof(p_fractional_number1)<<std::endl;


    int* a{},b{}; // В данном случае а будет указателем, а b просто интом

    //& является оператором получения адреса
    int variable{42};
    int* point{&variable};// Мы присваиваем указателю адрес переменной variable
    //int* point(variable) будет Compile error, т.к в variable лежит не адрес, а значение
    //УКАЗАТЕЛЬ хранит в себе адрес, а не значение!!!!

    std::cout<<"variable : "<<variable<<std::endl;
    std::cout<<"the address of variable in memory : "<<point<<std::endl;

    //Значения указателей можно спокойно менять другими адресами в дальнейшем
    int* p{nullptr};
    std::cout<<p;// выведет просто 0, значение по умолчанию(nullptr)

    int* pt{};
    double var{1};
    //pt = &var; Нельзя присваивать адрес переменной другого типа


    // Чтобы получить значение переменной через, зная ее адрес пишут *ptr
    // Пример снизу
    int num{5};
    int* ptr{&num};
    std::cout<<"The num is : "<<num<<std::endl;
    std::cout<<"The *ptr is : "<<*ptr<<std::endl;
    std::cout<<std::boolalpha;
    std::cout<<"(num == *ptr) is : "<<(num ==*ptr);
}