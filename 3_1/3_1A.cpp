#include <iostream>



int fact(int value)
{
    if (value < 2) return 1;
    return value*fact(value-1);
}

int main()
{
    int result;
    std::cin >> result;
    std::cout << fact(result);

    return 0;
}