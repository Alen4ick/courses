#include <iostream>

int main(){

    size_t size{10};
    // в массиве через указатели необязательно, чтобы размер был константным
    // Это видно в примере снизу
    double *p_salaries{new double[size]};
    int *p_students{new(std::nothrow) int[size]{}}; // Значения нулями будут
    double *p_scores{new(std::nothrow) double[size] {1, 2, 3, 5, 3}};


    if(p_scores){
        std::cout<<"size of scores (it's a regular pointer) : "<<sizeof(p_scores)<<std::endl;
        std::cout<<"Succesfully allocated memory for scores."<<std::endl;
        
        //Print out elements. Can use regular access notation or pointer arithmetis
        for (size_t i{}; i < size; ++i){
            std::cout<<"value : "<<p_scores[i]<<" : "<<*(p_scores + i)<<std::endl;

        }
    }
        delete[] p_students;
        p_students = nullptr;
        delete[] p_salaries;
        p_salaries = nullptr;
        delete [] p_scores;
        p_scores = nullptr;

    //static array vs dynamic array
    int scores[5] {1, 2, 3, 4, 5};
    std::cout<<*scores;
 }