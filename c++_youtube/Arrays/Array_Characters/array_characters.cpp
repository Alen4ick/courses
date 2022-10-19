#include<iostream>

int main(){
    // Declare array
    char message [6] { 'h','e','l','l','o','\0'}; // \0 нужно в конце, чтобы программа корректно выводила
    // иначе будет выводен мусор в конце

    // Print out the array through looping
    /* std::cout<<"message : "; */
   /*  for(auto c: messfor(auto c: message){
        std::cout<<c;
    age){
        std::cout<<c;
    } */
    std::cout<<std::endl;
    // Change characters in our array
   /*  message[0] = 'b';
    for(auto c: message){
        std::cout<<c;
    } */
    std::cout<<"message : "<<message<<std::endl;
    // C-string correctly down here
    char message2 [] {'h', 'e', 'l', 'l','o', '\0'};
    std::cout<<"messge2 is : " <<message2<<std::endl;

    //Если указать длину, то последний будет автоматически наш null terminator
    char message3 [6] {'h', 'e', 'l', 'l', 'o'};
    std::cout<<"message3 : "<<message3;
    

    // Короче говоря, чтобы была правильная c-string, надо либо засунуть на 1 элемент меньше, чем указано в длине
    // либо не указать длину и добавить в концу \0
    // либо указать правильную длину учитывая \0

    // String literal
    char literal [] {"Hello"}; // Каждый символ занимает 1 байт
    std::cout<<"literal : "<<literal<<std::endl;
    std::cout<<"sizeof(literal) : "<<sizeof(literal)<<std::endl;
    
}

