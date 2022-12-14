#include<iostream>

/* Function Templates это просто шаблон, как только вы вызываете функции с аргументами
разных типов, то компилятор либо перегружает функцию по заданному типу
либо использует уже перегруженную, то есть сразу не создает никаих перегруженных функций для разных типов
а только когда мы их вызываем */
template <typename T> 
T maximum(T a, T b){
    return (a > b) ? a : b;
}
//Чтобы функция выполнилась, надо чтобы все переменные были одного и того же типа
// и чтобы они поддерживали логику функции

int main(){
    /* int x{5};
    int y{2};
    int result = maximum(x, y);
    std::cout<<"result : "<<result<<std::endl;
} */
    //Снизу не стоит делать, потому что сравниваются указатели(адреса в памяти)
    // в целом не следует использовать указатели в template
    int x{5};
    int y{7};
    int* p_x{&x};
    int* p_y{&y};
    auto result = maximum(*p_x, *p_y);
    std::cout<<"result : "<<result<<std::endl;// Вывелось 
}