#include <iostream>
// Гораздо удобнее разделить определение и внутренность ф-ии
int max(int a, int b); //declaration or prototype
int min(int a, int b);
int inc_mult(int a, int b);

int main(){
    int x{6};
    int y{2};
    int result = max(x, y);
    int result2 = min(x, y);
    int result3 = inc_mult(x, y);
    std::cout<<"result is "<<result<<std::endl;
    std::cout<<"result2 is "<<result2<<std::endl;
    std::cout<<"result3 is "<<result3<<std::endl;

}

int max(int a, int b){
    return (a > b) ? a : b;
}
int min(int a, int b){
    return (a < b) ? a:b;
}
int inc_mult(int a, int b){
    return((++a) * (++b));
}
