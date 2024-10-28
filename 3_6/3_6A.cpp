#include <iostream>
#include <vector>
#include <cstdlib>

std::vector<int> QuickSortOneStep(std::vector<int> values)
{
    if (values.size() <= 1)
    {
        return values;
    }

    int pivot = values[0];
    int i = 0;

    for (int j = 1; j < values.size(); j++)
    {
        if (values[j] < pivot)
        {
            i++;
            std::swap(values[i], values[j]);
        }
    }

    std::swap(values[0], values[i]);

    return values;
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

    std::vector<int> result = QuickSortOneStep(arrayToSort);

    for (auto elem : result)
    {
        std::cout << elem << ' ';
    }

    return 0;
}
