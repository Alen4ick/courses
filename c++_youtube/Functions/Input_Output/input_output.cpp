#include<iostream>
#include<string>
void max_str(const std::string& input1, const std::string input2, std::string& output){
        if(input1 > input2){
            output = input1;
        }
        else{
            output = input2;
        }
    }

void max_int(int input1, int input2, int& output){
    output = (input1 > input2) ? input1 : input2;
}

void max_double (double input1, double input2, double * output){
    *output = (input1 > input2) ? input1 : input2;
}
int main(){
    std::string str_1 {"Alen"};
    std::string str_2 {"Milena"};
    std::string out;
    max_str(str_1, str_2,out );
    std::cout<<out<<std::endl;

    int out_int;
    int int1{45};
    int int2{23};
    max_int (int1, int2, out_int);
    std::cout<<"max int : "<<out_int<<std::endl;

    double out_double;
    double in_d1{23.8};
    double in_d2{1.2};
    max_double(in_d1, in_d2, &out_double);
    std::cout<<"*out_double : "<<out_double<<std::endl;
}