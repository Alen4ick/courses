#include<iostream>
int main(){
    bool var = true;
    if (var == !false){
        std::cout<<"It works\n";

    }
    // Else If statement
    const int Pen(10);
    const int Marker(20);
    const int Ellipse(40);
    int tool{ Ellipse };
    if (tool == Pen){
        std::cout<<"The tool is Pen";
    }
    else if (tool == Marker){
        std::cout<<"The tool is Marker";
    }
    else if (tool == Ellipse){
        std::cout<<"The tool is Ellipse";
    }

}