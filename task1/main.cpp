#include <iostream>
#include <RedSquare.h>
#include <Circle.h>
#include <Triangle.h>
#include <Rectangle.h>

int main(){

    RedSquare bigSquare;
    bigSquare.addShape(new Circle(2));
    bigSquare.addShape(new Circle(6));
    bigSquare.addShape(new TriAngle(9,5));
    bigSquare.addShape(new Rectangle(7,4));
    std::cout<< bigSquare.calcSquare()<<std::endl;
    return 0;

}
