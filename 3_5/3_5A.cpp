#include <iostream>
#include <vector>
#include <algorithm>

void SelectionSort(std::vector<int> &vectorToSort)
{
	auto min = std::min(vectorToSort.begin(), vectorToSort.end());

	for (int i = 0; i < vectorToSort.size(); i++)
	{
		auto min = std::min_element(vectorToSort.begin() + i, vectorToSort.end());
		int temp = vectorToSort[i];
		vectorToSort[i] = *min;
		*min = temp;
	}
}

int main()
{
	int length;
	std::cin >> length;

	std::vector<int> arrayToSort = std::vector<int>();

	for (int i = 0; i < length; i++)
	{
		int value;
		std::cin >> value;

		arrayToSort.push_back(value);
	}

	SelectionSort(arrayToSort);

	for (auto elem : arrayToSort)
	{
		std::cout << elem << ' ';
	}

	return 0;
}