#include<iostream>
// В данном случае внизу у нас копируется result
// но бывают случаи когда result один и тот же, через одну фукнцию это показано
int sum(int a, int b){
    int result = a + b;
    std::cout<<"&result : "<<&result<<std::endl;
    return result;
}

std::string add_strings(std::string str1, std::string str2){
    std::string result2 = str1 + str2;
    std::cout<<"&result2 : " << &result2<<std::endl;
    return result2;
}
int main(){
    int x{5};
    int y{1};
    int result = sum(x, y);
    std::cout<<"&result : "<<&result<<std::endl;

    std::string in_str1 {"Hello"};
    std::string in_str2{" World!"};
    std::string result2 = add_strings(in_str1, in_str2);
    std::cout<<"&result2 : "<<&result2<<std::endl;
}