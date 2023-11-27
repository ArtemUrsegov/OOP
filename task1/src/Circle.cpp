#include "Circle.h"

Circle::Circle (double aR){
 r=aR;
}
double Circle:: calcSquare(){
    return M_PI*r*r;
}
