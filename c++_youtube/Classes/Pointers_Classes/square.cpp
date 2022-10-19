#include "square.h"

Square::Square(double param){
        side = param;
    }
double Square:: square(){
        return side * side;
    }
void Square:: set(double param){
        side = param;
    }
double Square:: get(){
        return side;
    }