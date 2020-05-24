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

void modePlus()
{
	std::cout << "Enter 2 integers to add: \n";
		int pOne{};
		int pTwo{};
			std::cin >> pOne;
			std::cin >> pTwo;
				std::cout << "Answer: " << pOne + pTwo << '\n';
}

void modeSubtract()
{
	std::cout << "Enter 2 integers to subtract: \n";
		int sOne{};
		int sTwo{};
			std::cin >> sOne;
			std::cin >> sTwo;
				std::cout << "Answer: " << sOne - sTwo << '\n';
}

void modeMulti()
{
	std::cout << "Enter 2 integers to multiply: \n";
		int mOne{};
		int mTwo{};
			std::cin >> mOne;
			std::cin >> mTwo;
				std::cout << "Answer: " << mOne * mTwo << '\n';
}

void modeDivide()
{
	std::cout << "Enter 2 integers to divide: \n";
		int dOne{};
		int dTwo{};
			std::cin >> dOne;
			std::cin >> dTwo;
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