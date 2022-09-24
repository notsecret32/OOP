#pragma once
#include <iostream>
#include "UserInput.h"

class StringHandler
{
	static std::string example;
public:
	static void GetFromUserInput(const char* _example) { example = (char*)_example; }
	static void Print() { std::cout << example << std::endl; }
};

