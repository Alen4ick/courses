#include<iostream>

// Lambda function signature : 
// [capture list] (parametrs) -> return type{
// Function body }

// Потренируемся с лямбда функциями снизу

int main(){
    /* [](){
        std::cout<<"Hello World!"<<std::endl;
    };// Она определена, но не вызвана, а еще нет имени
    
    auto func = [](){
        std::cout<<"Hello World!"<<std::endl;
    }; // Теперь есть имя, но не вызвана
    func();// Так мы вызвали ее  */

    // чтобы вызвать сразу же лямба функцию, то не нужно давать ей имя

    /* [](){
        std::cout<<"Hello World!"<<std::endl;
    }(); */

    // Так мы даем на вход параметры и сразу вызываем функцию
    /* [](double a, double b){
        std::cout<<"a + b : "<<(a + b)<<std::endl;
    }(10.0, 5.0); */

    // Даем название и вызываем с параметрами
   /*  auto func1 = [] (double a, double b){
        std::cout<<"a + b : "<<(a + b)<<std::endl;
    };
    func1(10, 20);
    func1(1, 2); */

    // return in lambda functions
    /* auto result = [](double a, double b){
        return a + b;
    }(1, 9);
    std::cout<<"result : "<<result<<std::endl; */


    // И самое безумное, написать функцию во время выводы и вывести значение

    /* /* std::cout<<"result2 : "<<[](double a, double b){
        return a + b;
    }(10, 60)<<std::endl; *\ */

    // Также в переменные можно записывать функцию 

    // также можно сразу указать выводимый тип лямба функции
    auto f = [](double a, double b)-> int{
        return a + b;
    }(5.0, 6.1);
    std::cout<<f;
}



