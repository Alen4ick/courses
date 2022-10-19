#include<iostream>

int main(){
    std::cout<<"nullptr check"<<std::endl;
    int *ptr {}; //contains nullptr

    if(!(ptr == nullptr)){
        std::cout<<"ptr points to a VALID address : "<<ptr<<std::endl;
   }
   else{
        std::cout<<"ptr points to an INVALID address : "<<std::endl;
    }
    // Очень удобно использовать условие на указатель, если там хранится nullptr, то это считается как false
    // и если там нормальный адрес, то это true
    if(!ptr){
        std::cout<<"invalid address"<<std::endl;

    }
    //Также можно применить delete к nullptr
}