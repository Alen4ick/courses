#include <iostream>

int main() {
    // Declare array of ints
    /* int scores [10]; // Изначально всякий мусор находится

    // read data
    std::cout<<"scores [0] : "<<scores[0]<<std::endl;
    for (size_t i{0}; i < 10; ++i){
        std::cout<<scores [i]<<std::endl;
    } */


    // Write our own data , но лучше через цикл
    /* scores[0] = 20;
    scores[1] = 21;
    scores[2] = 22;
    scores[3] = 34;
    for (size_t i {0}; i < 10; ++i){
        std::cout<<scores[i]<<std::endl;
    } */
    

    //Declare and initialize
    /* double array[5] {1.3, 2.5, 9.5, 1.6, 3.5};
    for (size_t i{} ; i < 5; ++i){
        std::cout<<array[i]<<std::endl;
    } */

    int families [5] {12, 6 ,2}; // В таком случае 3 и 4 ячейки автоматически будут нулями
    

    int class_sizes [] {10, 23, 23, 52, 2, 6, 233};
    // Выведем через специальный цикл, удобная штука
    for (auto value: class_sizes){ // Не принципиально auto, можно просто написать тип массив, в данном случае int
        std::cout<<"value : "<<value<<std::endl;
    }
}
