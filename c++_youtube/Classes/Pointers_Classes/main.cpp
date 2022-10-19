#include<iostream>
#include "square.h"
#include "square.cpp"


int main(){
    /* Square s1(5);
    s1.set(11);
    std::cout<<s1.get()<<std::endl;
    std::cout<<s1.square() */;

    Square s1(7);
    s1.square();
    
    Square* p_s1 = &s1;
    //Теперь если нам надо обратиться к методу 
    // через указатель, то код ниже

    std::cout<<"square : "<<(*p_s1).square()<<std::endl;
    // Но для этого существует более удобная конструкция (код ниже)
    std::cout<<"square : "<<p_s1->square()<<std::endl;


    // Также можно создать объект на куче
    Square *s2 = new Square(10);
    std::cout<<"square : "<<s2->square()<<std::endl;
    delete s2;
}   
