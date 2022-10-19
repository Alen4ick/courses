#include<iostream>
// Важное замечание, чтобы использовать функцию, она должна быть написана выше кодом
void enter_bar(unsigned int age){
    if (age > 18){
        std::cout<<"You are "<<age<<" years old. Please proceed."<<std::endl;
    }
    else{
        std::cout<<"Sorry, you arer too young"<<std::endl;
    }
    return; // Ничего страшного не будет

}
int max_2(int a, int b){
    return a > b ? a : b;
}
void say_hello(){
    std::cout<<"Hello"<<std::endl;
}

int lucky_number(){
    return 69;
}

double increment_multiply(double a, double b){
    std::cout<<"Inside function, before increment : "<<std::endl;
    std::cout<<"a : "<<a<<std::endl;
    std::cout<<"b : "<<b<<std::endl;

    double result = ((++a) * (++b));

    std::cout<<"Inside function, after increment : "<<std::endl;
    std::cout<<"a : "<<a<<std::endl;
    std::cout<<"b : "<<b<<std::endl;

    return result;
}
int main(){

    //enter_bar(29); // Function arguments
   /*  for(size_t i{}; i < 20; ++i){
        enter_bar(i);
    }
    return 0; */
    int m = max_2(18, 29);
    std::cout<<"max is " << m<<std::endl;
    say_hello();
    std::cout<<lucky_number()<<std::endl;;

    // Мы подаем функции параметры по значению, они копируются
    double h{3.00};
    double i{4};

    std::cout<<"Outside function, before increment : "<<std::endl;
    std::cout<<"h : "<<h<<std::endl;
    std::cout<<"i : "<<i << std::endl;

    double incr_mult_result = increment_multiply(h, i);

    std::cout<<"Outside function, before increment : "<<std::endl;
    std::cout<<"h : "<<h<<std::endl;
    std::cout<<"i : "<<i<<std::endl;
} 