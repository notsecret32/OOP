#include "Number.h"

double Number::operator=(Number num)
{
    return this->number = num.number;
}

double Number::operator+(Number num2)
{
    return this->number + num2.number;
}

double Number::operator-(Number num2)
{
    return this->number - num2.number;
}

double Number::operator*(Number num2)
{
    return this->number * num2.number;
}

double Number::operator/(Number num2)
{
    return this->number / num2.number;
}

bool Number::operator==(Number num2)
{
    return (this->number == num2.number) ? true : false;
}

bool Number::operator>=(Number num2)
{
    return (this->number >= num2.number) ? true : false;
}

bool Number::operator<=(Number num2)
{
    return (this->number <= num2.number) ? true : false;
}

double& Number::operator++()
{
    this->number++;
    return this->number;
}

double& Number::operator--()
{
    this->number--;
    return this->number;
}

double Number::operator++(int num)
{
    return ++this->number;
}

double Number::operator--(int num)
{
    return --this->number;
}

std::ostream& operator<<(std::ostream& os, Number number)
{
    return os << number.number;
}
