#include <iostream>

int Fibonacci(int value)
{
	if (value <= 1)
	{
		return value;
	}

	int prev = 0;
	int curr = 1;

	for (int i = 0; i < value - 1; i++)
	{
		int oldPrev = prev;
		prev = curr;
		curr = oldPrev + prev;
	}

	return curr;
}

int main()
{
	int value;
	std::cin >> value;

	std::cout << Fibonacci(value);

	return 0;
}