#pragma once
class UserInput
{
	static char* _example;
public:
	static char* GetExample() { return _example; }
	static void GetInput(const char* example) { _example = (char*)example; }
};

