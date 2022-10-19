#include <iostream>
int main(){
    //One byte in memory :2^8 = 256 different values(0~256)
    char character1{'a'};
    char character2{'b'};
    char character3{'b'};
    char character4{'o'};
    char character5{'w'};

    std::cout<<character1<<std::endl;
    std::cout<<character2<<std::endl;
    std::cout<<character3<<std::endl;
    std::cout<<character4<<std::endl;
    std::cout<<character5<<std::endl;

    std::cout<<std::endl;
    char value = 65; //ASCII character code for 'A'
    std::cout<<"value : "<<value<<std::endl;
    std::cout<<"value(int) : "<<static_cast<int>(value)<<std::endl;


}