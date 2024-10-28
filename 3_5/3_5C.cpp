#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> Merge(std::vector<int> firstVector, std::vector<int> secondVector)
{
	std::vector<int> result = std::vector<int>();

	while (firstVector.size() > 0 && secondVector.size() > 0)
	{
		std::vector<int>::iterator minFirst = std::min(firstVector.begin(), firstVector.end());
		std::vector<int>::iterator minSecond = std::min(secondVector.begin(), secondVector.end());

		if (*minFirst < *minSecond)
		{
			int value = *minFirst;
			firstVector.erase(minFirst);
			result.push_back(value);
		}
		else
		{
			int value = *minSecond;
			secondVector.erase(minSecond);
			result.push_back(value);
		}
	}

	for (auto elemFirst : firstVector)
	{
		result.push_back(elemFirst);
	}

	for (auto elemSecond : secondVector)
	{
		result.push_back(elemSecond);
	}

	return result;
}

std::vector<int> MergeSort(std::vector<int> arrayToSort)
{
	std::vector<int> result;
	if (arrayToSort.size() <= 1)
	{
		return arrayToSort;
	}

	std::vector<int> left, right;

	for (int i = 0; i < arrayToSort.size(); i++)
	{
		if (i < arrayToSort.size() / 2)
		{
			left.push_back(arrayToSort[i]);
		}
		else
		{
			right.push_back(arrayToSort[i]);
		}
	}

	std::vector<int> sortedLeft = MergeSort(left);
	std::vector<int> sortedRight = MergeSort(right);
	result = Merge(sortedLeft, sortedRight);
	return result;
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

	std::vector<int> resultArray = MergeSort(arrayToSort);

	for (auto elem : resultArray)
	{
		std::cout << elem << ' ';
	}
	
	return 0;
}