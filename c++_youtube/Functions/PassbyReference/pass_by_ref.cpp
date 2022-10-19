#include<iostream>

void say_age(int &age){
    ++age;
    std::cout<<"Hello! You are "<<age<<" years old"<<std::endl;
}

int main(){
    int age {18};
    std::cout<<"age - before : "<<age<<std::endl;
    say_age(age);
    std::cout<<"age - after : "<<age<<std::endl;
}