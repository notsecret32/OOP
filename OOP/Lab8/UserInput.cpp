#include "UserInput.h"

int UserInput::result = 0;
std::string UserInput::_example = "";

int UserInput::StringParser::num1 = 0;
int UserInput::StringParser::num2 = 0;
char UserInput::StringParser::operation = NULL;

void UserInput::StringParser::Split() { 
	std::regex number{ "\\d+" };
	std::regex operation{ "(\\+|-|/|\\*)" };

	std::vector<std::string> numbers{ std::sregex_token_iterator{_example.cbegin(), _example.cend(), number}, {} };
	std::vector<std::string> operations{ std::sregex_token_iterator{_example.cbegin(), _example.cend(), operation}, {} };

	/*cout << "Numbers: ";
	for (auto item : numbers) {
		cout << item << " ";
	}
	cout << endl;

	cout << "Operations: ";
	for (auto item : operations) {
		cout << item << " ";
	}

	cout << endl;

	cout << "Numbers lenghth: " << numbers.size() << endl;
	cout << "Operations length: " << operations.size() << endl;

	cout << endl;*/

	result = std::stoi(numbers[0]);

	try
	{
		if (operations.size() >= numbers.size()) {
			throw std::exception("Bad Example!");
			return;
		}

		for (unsigned i = 0; i < numbers.size() + operations.size() + 1; i++)
		{
			if (operations.at(i) == "+") {
				result += std::stoi(numbers[i + 1]);
			}

			if (operations.at(i) == "-") {
				result -= std::stoi(numbers[i + 1]);
			}

			if (operations.at(i) == "*") {
				result *= std::stoi(numbers[i + 1]);
			}

			if (operations.at(i) == "/") {
				if (std::stoi(numbers[i]) == 0 || std::stoi(numbers[i + 1]) == 0) {
					throw std::exception("Divide by zero exception!");
					result = 0;
					return;
				}

				result /= std::stoi(numbers[i + 1]);
			}
		}
		cout << endl;
	}
	catch (std::exception& ex) {
		cout <<"Error: " << ex.what() << endl;
	}
}