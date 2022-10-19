#include<iostream>

int main(){
    //size_t Беззнаковый тип, Alias для unsigned int, используется для с
    // для счетчиков, арифметики, значения чего-то положительного
    for(size_t i{0} ; i < 10; ++i){
        std::cout<<i<<" I love C++ "<<std::endl;
    }
    std::cout<<"sizeof(size_t) : "<<sizeof(size_t)<<std::endl;

    // Чтобы обратиться к интерируемой переменной за пределами цикла, ее нужно сперва объявить за пределами.
    size_t j{};
    for(j ; j< 10; ++j){
        std::cout<<j<<std::endl;
    }
    std::cout<<"Here i am "<<j;
    // Интересный факт, итератор в цикле while всегда нужно инициализировать за циклом
    size_t i{0};
    const size_t Bound{10};
    while(i < Bound){
        ++i;
    }
    // Do While Loop
    // Эта конструкция сперва выполняется, а потом уже заходит в условие

    const size_t Count {20};
    size_t iter{0};
    do{
        std::cout<<"Something"<<std::endl;
        ++iter;
    }while(iter < Count);
    

}