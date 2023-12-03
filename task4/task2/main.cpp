#include "comp.h"

//cmake -G  "MinGW Makefiles" ../

int main(){

    std::string s1 = "AB";
    std::string s2 = "CD";
    Comp <double>num1;Comp <int>num2;Comp <char>num3;Comp <std::string>num4;
    double a=5.5, b=10.1;
    int c=5, d=10;
    char e=1, f=2;


    std::cout <<"a+b = "<< num1.sum(a,b) << "\n";
    std::cout <<"aVb = "<< num1.compare(a,b) << "\n";
    std::cout <<"c+d = "<< num2.sum(c,d) << "\n";
    std::cout <<"cVd = "<< num2.compare(c,d) << "\n";
    std::cout <<"e+f = "<< num3.sum(e,f) << std::endl;
    std::cout <<"eVf = "<< num3.compare(e,f) << std::endl;
    std::cout <<"s1+s2 = "<< num4.sum(s1,s2) << "\n";
    std::cout <<"s1(Less)s2 = "<< num4.Less(s1,s2) << "\n";
    std::cout <<"s1(More)s2 = "<< num4.More(s1,s2) << "\n";
    std::cout <<"s1(Equal)s2 = "<< num4.Equal(s1,s2) << "\n";
    return 0;
}