#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> MergeArrays(std::vector<int> firstArray, std::vector<int> secondArray)
{
	std::vector<int> result = std::vector<int>();

	int i = 0, j = 0;

	while (i < firstArray.size() && j < secondArray.size())
	{
		if (firstArray[i] < secondArray[j])
		{
			result.push_back(firstArray[i]);
			i++;
		}
		else if (secondArray[j] < firstArray[i])
		{
			result.push_back(secondArray[j]);
			j++;
		}
		else
		{
			result.push_back(firstArray[i]);
			result.push_back(secondArray[j]);
			i++;
			j++;
		}
	}

	while (i < firstArray.size())
	{
		result.push_back(firstArray[i]);
		i++;
	}

	while (j < secondArray.size())
	{
		result.push_back(secondArray[j]);
		j++;
	}

	return result;
}

int main()
{
	int length;
	std::cin >> length;

	std::vector<int> result = std::vector<int>();

	for (int i = 0; i < length; i++)
	{
		std::vector<int> temp = std::vector<int>();

		int size;
		std::cin >> size;

		for (int j = 0; j < size; j++)
		{
			int value;
			std::cin >> value;

			temp.push_back(value);
		}

		result = MergeArrays(result, temp);
	}

	for (auto elem : result)
	{
		std::cout << elem << ' ';
	}

	return 0;
}