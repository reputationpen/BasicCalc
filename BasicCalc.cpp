#include <iostream>

int selectMode()
{
	std::cout << "Enter the number corresponding to the sign \n";
		std::cout << "1: + \n";
		std::cout << "2: - \n";
		std::cout << "3: * \n";
		std::cout << "4: / \n";
		std::cout << "5: exit \n";
			int mode{};
			std::cin >> mode;
				return mode;
}

int getValue()
{
	std::cout << "Enter an integer \n";
	int input{};
	std::cin >> input;
	return input;
}

void modePlus()
{
		int pOne{ getValue() };
		int pTwo{ getValue() };
				std::cout << "Answer: " << pOne + pTwo << '\n';
}

void modeSubtract()
{
		int sOne{ getValue() };
		int sTwo{ getValue() };
				std::cout << "Answer: " << sOne - sTwo << '\n';
}

void modeMulti()
{
		int mOne{ getValue() };
		int mTwo{ getValue() };
				std::cout << "Answer: " << mOne * mTwo << '\n';
}

void modeDivide()
{
		int dOne{ getValue() };
		int dTwo{ getValue() };
				std::cout << "Answer: " << dOne / dTwo << '\n';
}

int main()
{
	int modeX{ selectMode() };
	if (modeX == 1)
	{
		modePlus();
	}
	if (modeX == 2)
	{
		modeSubtract();
	}
	if (modeX == 3)
	{
		modeMulti();
	}
	if (modeX == 4)
	{
		modeDivide();
	}
	if (modeX == 5)
	{
		return 0;
	}
	main();
}