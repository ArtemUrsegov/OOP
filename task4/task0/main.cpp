#include "temp_calc.h"

//cmake -G  "MinGW Makefiles" ../

int main(){

    My_calc num1, num2, num3;
    double a=10.1,b=5.2;
    int c=10,d=5;
    char e=10.3, f=5.4;
    std::cout <<"a+b = "<< num1.sum(a,b) << "\n";
    std::cout <<"a-b = "<< num1.sub(a,b) << "\n";
    std::cout <<"a*b = "<< num1.mult(a,b) << "\n";
    std::cout <<"a/b = "<< num1.div(a,b) << "\n";
    std::cout <<"c+d = "<< num2.sum(c,d) << "\n";
    std::cout <<"c-d = "<< num2.sub(c,d) << "\n";
    std::cout <<"c*d = "<< num2.mult(c,d) << "\n";
    std::cout <<"c/d = "<< num2.div(c,d) << std::endl;
    std::cout <<"e+f = "<< static_cast<double>(num3.sum(e,f)) << std::endl;
    std::cout <<"e-f = "<< static_cast<double>(num3.sub(e,f)) << std::endl;
    std::cout <<"e*f = "<< static_cast<double>(num3.mult(e,f)) << std::endl;
    std::cout <<"e/f = "<< static_cast<double>(num3.div(e,f)) << std::endl;

    return 0;
}