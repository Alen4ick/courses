#include<iostream>

int main(){
    // Разница между ++value и value++ заключается в том, что
    // ++value выполнятеся сразу же, а value++ нет
    // снизу показано, что во время вывода value++ значение не меняется сразу



    int value{5};
    // Increment by one
    value = value + 1;
    std::cout<<"The value is : "<<value<< std::endl;

    value = 5; //Reset value to 5

    // Decrement by one
    value = value - 1;
    std::cout<<"The value is : " << value<<std::endl;

    // Reset value to 5
    value = 5;

    std::cout<<"The value is (incrementing) : "<<value++<<std::endl;
    std::cout<<"The value is : "<<value<<std::endl;
    
    std::cout<<std::endl;

    //Decrmenent with postfix
    //Reset value to 5

    value = 5;

    std::cout<<"The value is (decrementing) : "<<value--<<std::endl;
    std::cout<<"The value is : " << value<< std::endl;


    //Reset value to 5
    //Increment with prefix
    value = 5;
    std::cout<<"The value is (incrementing with prefix) : "<<++value<<std::endl;

    //Reset value to 5
    //Decrement with prefix
    value =5;
    std::cout<<"The value is (decrementing with prefix):"<<--value<<std::endl;
    std::cout<<"The value is : "<<value<<std::endl;

}