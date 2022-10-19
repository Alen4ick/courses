#include<iostream>
#include<string>


int main(){
    std::string full_name;
    std::string planet{"Earth. Where the sky is blue"};
    std::string prefered_planet {planet};
    std::string message {"Hello there", 5}; // берет только первые 5 символов

    std::string weird_message(4, 'e');// строка из четырех симоволов e

    std::string greeting{"Hello World"};
    std::string saying_hello {greeting, 6, 5 };// берет строку, начиная с 6 символа, след 5 символов

    std::cout<<"full_name : "<<full_name<<std::endl;
    std::cout<<"planet : "<<planet<<std::endl;
    std::cout<<"prefered_planet : "<<prefered_planet<<std::endl;
    std::cout<<"message : "<<message<<std::endl;
    std::cout<<"weird_message : "<<weird_message<<std::endl;
    std::cout<<"greeting : "<<greeting<<std::endl;
    std::cout<<"saying_hello : "<<saying_hello<<std::endl;

}