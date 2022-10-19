#include<iostream>


int main(){
    const int Pen{10};
    const int Marker{30};
    const int Eraser{30};
    const int Pencil{40};

    int tool{Pencil};

    // Switch помогает нам сократить код во время условий

    switch (tool){

        case Pen: {
            std::cout<<"It is a Pen\n";
        }
        break;

        case Marker: {
            std::cout<<"It is a Marker\n";
        }
        break;

        case Pencil: {
            std::cout<<"It is a Pencil\n";
        }
        break;
        
        default:{
            std::cout<<"There is no such a tool\n";
        }
        
    }
}