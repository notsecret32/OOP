#pragma once
#include <iostream>

class Number
{
	double number = 0;
public:
	Number() {}
	Number(double number)
		: number(number) {

	}

	friend std::ostream& operator<<(std::ostream& os, Number number);

	double operator=(Number num);

	double operator+(Number num2);
	double operator-(Number num2);
	double operator*(Number num2);
	double operator/(Number num2);

	bool operator==(Number num2);
	bool operator>=(Number num2);
	bool operator<=(Number num2);

	double& operator++();
	double& operator--();
	double operator++(int);
	double operator--(int);
};

