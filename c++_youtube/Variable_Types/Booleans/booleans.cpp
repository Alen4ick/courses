#include <iostream>

int main(){
    
    bool red_light(true);// занимает 8 бит в памяти
    bool green_light(false);

    if(red_light == true){
        std::cout<<"Stop!"<<std::endl;
    }
    else{
        std::cout<<"Go through!"<<std::endl;
    }

    // Или
    if (green_light){
        std::cout<<"The light is green!"<<std::endl;
    }
    else{
        std::cout<<"The light is NOT green!"<<std::endl;
    }

    // Sizeof
    std::cout<<"sizeof(boolean) : "<<sizeof(bool)<<std::endl;

    //Printing out a bool
    //1 True
    //0 False
    std::cout<<std::endl;
    std::cout<<"red_light : "<<red_light<<std::endl;
    std::cout<<"green_light : "<<green_light<<std::endl;

    std::cout<<std::boolalpha;
    std::cout<<"red_light : "<<red_light<<std::endl;
    std::cout<<"green_light : "<<green_light<<std::endl;
    
}