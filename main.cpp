#include <iostream>
#include <string>

void PrintComment(std::string input)
{
	std::string currentValue;

	for (char c : input)
	{
		currentValue += c;
		if (c != ' ')
			std::cout << currentValue << std::endl;
	}

	for (int i = currentValue.size() - 1; i > 0; --i)
	{
		if (currentValue[i] != ' ')
		{
			for (int j = 0; j < i; j++)
			{
				std::cout << currentValue[j];
			}
			std::cout << std::endl;
		}
	}
}

int main()
{
	std::string input;
	std::getline(std::cin, input);
	PrintComment(input);

	std::cin >> input;
}
