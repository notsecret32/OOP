#pragma once
#include <iostream>
#include <string>
#include <regex>
#include <vector>
#include <stdexcept>
using std::cout;
using std::endl;

class UserInput
{
	static std::string _example;
	static int result;
public:
	static std::string GetExample() { return _example; }
	static void Input(const std::string example) { _example = example; UserInput::StringParser::Split(); }
	static int Calculate() { return result; }

	class StringParser
	{
		static int num1;
		static int num2;
		
		static char operation;
	public:
		static void Split();
	};
};

