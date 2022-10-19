#include<iostream>
#include "square.h"
#include "square.cpp"


int main(){
    Square s1(5);
    s1.set(11);
    std::cout<<s1.get()<<std::endl;
    std::cout<<s1.square();
}