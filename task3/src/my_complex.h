#ifndef MY_COMPLEX_H
#define MY_COMPLEX_H

#include <iostream>

class My_Complex{
    public:
        My_Complex();
        My_Complex(double Re, double Im);
        My_Complex(const My_Complex &Complex);
        ~My_Complex();

        My_Complex operator+(const My_Complex& Complex)const;
        My_Complex operator-(const My_Complex& Complex)const;
        My_Complex operator*(const My_Complex& Complex)const;

        double Re()const{return this->re;}
        double Im()const{return this->im;}
        void setRe(double Re);
        void setIm(double Im);
        void Print();
    private:
        double re, im;
};

#endif