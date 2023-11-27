#include <iostream>
#include <RedSquare.h>
#include <Circle.h>
#include <Triangle.h>
#include <Rectangle.h>

int main(){

    RedSquare bigSquare;
    bigSquare.addShape(new Circle(5));
    bigSquare.addShape(new Circle(5));
    bigSquare.addShape(new TriAngle(10,5));
    bigSquare.addShape(new Rectangle(10,5));
    std::cout<< bigSquare.calcSquare()<<std::endl;
    return 0;

}
