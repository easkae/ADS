#include <iostream>
#include <vector>
#include <cstdlib>

std::vector<int> ConcatVectors(std::vector<int> vector1, std::vector<int> vector2)
{
    std::vector<int> result = vector1;
    for (auto elem : vector2)
    {
        result.push_back(elem);
    }

    return result;
}

std::vector<int> QuickSort(std::vector<int> values)
{
    if (values.size() <= 0)
    {
        return values;
    }

    int selectedElem = values[std::rand()%values.size()];

    std::vector<int> small = std::vector<int>();
    std::vector<int> large = std::vector<int>();
    std::vector<int> equal = std::vector<int>();

    for (auto i : values)
    {
        if (i < selectedElem)
        {
            small.push_back(i);
        }
        else if (i > selectedElem)
        {
            large.push_back(i);
        }
        else
        {
            equal.push_back(i);
        }
    }

    small = QuickSort(small);
    large = QuickSort(large);

    for (auto elem : equal)
    {
        small.push_back(elem);
    }

    for (auto elem : large)
    {
        small.push_back(elem);
    }

    return small;
}

int main()
{
    std::vector<int> arrayToSort = std::vector<int>();
    int elemCount;

    std::cin >> elemCount;

    for (int i = 0; i < elemCount; i++)
    {
        int value;
        std::cin >> value;
        arrayToSort.push_back(value);
    }

    std::vector<int> result = QuickSort(arrayToSort);

    for (auto elem : result)
    {
        std::cout << elem << ' ';
    }

    return 0;
}