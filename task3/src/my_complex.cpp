#include "my_complex.h"

My_Complex::My_Complex()
{
    this->re = 0;
    this->im = 0;
}

My_Complex::My_Complex(double Re, double Im)
{
    this->re = Re;
    this->im = Im;
}

My_Complex::My_Complex(const My_Complex &Complex)
{
    this->re = Complex.Re();
    this->im = Complex.Im();
}

My_Complex::~My_Complex()
{

}

My_Complex My_Complex::operator+(const My_Complex& Complex)const
{
    return My_Complex(re + Complex.Re(), im + Complex.Im());
}
My_Complex My_Complex::operator*(const My_Complex& Complex)const
{
    return My_Complex(re * Complex.Re(), im * Complex.Im());
}

My_Complex My_Complex::operator-(const My_Complex& Complex)const
{
    return My_Complex(re - Complex.Re(), im - Complex.Im());
}
void My_Complex::Print()
{
    std::cout << Re() << "+" << Im() << "i" << std::endl;
}

void My_Complex::setRe(double Re)
{
    this->re = Re;
}

void My_Complex::setIm(double Im)
{
    this->im = Im;
}