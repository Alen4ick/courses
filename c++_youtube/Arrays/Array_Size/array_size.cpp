#include<iostream>

int main(){
    // Ниже приведены два способа узнать длину массива, а не кол-во байтов
    // 1 C++17 и выше std::size(array)
    // sizeof(array)/sizeof(array[0])

    int scores [] {1, 2, 3, 5, 3};
    std::cout<<std::size(scores)<<std::endl;
    std::cout<<sizeof(scores)/sizeof(scores[0]);

    // Но лучше всего использоваться специальный цикл
    for(auto value : scores){
        std::cout<<"value : "<<value<<std::endl;
    }

}