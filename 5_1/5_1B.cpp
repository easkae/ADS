#include <iostream>
#include <vector>

int FibonacciLastDigit(int value)
{
	if (value <= 1)
	{
		return value;
	}

	std::vector<int> store = std::vector<int>(value+1);
	store[0] = 0;
	store[1] = 1;

	for (int i = 2; i <= value; i++)
	{
		store[i] = (store[i - 1] + store[i - 2])%10;
	}
	return store[value];
}

int main()
{
	int value;
	std::cin >> value;

	std::cout << FibonacciLastDigit(value);

	return 0;
}