#include<iostream>
#include<string>
//Чтобы перегрузить функцию недостаточно изменить тип выводимого значения
// надо так или иначе изменить входные параметры функции
// Снизу показаны разные виды перегруженных функций

int max(int a, int b){
    std::cout<<"int overload called"<<std::endl;
    return (a > b) ? a : b;
}

double max(double a, double b){
    std::cout<<"double overload called"<<std::endl;
    return (a > b) ? a : b;
}

double max(int a, double b){
    std::cout<<"(int, double) overload called"<<std::endl;
    return (a > b) ? a : b;

}

double max(double a, int b){
    std::cout<<"(double, int) overload called"<<std::endl;
    return (a > b) ? a : b;

}

std::string_view max(std::string_view a, std::string_view b){ // std::string_view нужен только для чтения стринг
    std::cout<<"string overload called"<<std::endl;
    return (a > b) ? a : b;
}
// Так тоже можно (return неправильные, но пофиг)
double max(double a, int b, int c){
    std::cout<<"(double, int ,int) overload called"<<std::endl;
    return a;
}

int main(){
    int x{4};
    int y{5};
    double a{5.4};
    double b{7.6};

    auto result = max(x, y);
    auto result1 = max(x, b);
    auto result2 = max(a, y);
    auto result3 = max(a, b);
    auto result4 = max("Alen", "Milena");
}