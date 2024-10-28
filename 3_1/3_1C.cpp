#include <iostream>

int fact(int value)
{
    if (value < 2) return 1;
    return value*fact(value-1);
}

int Combination(int n, int k)
{
    return fact(n)/(fact(k)*fact(n-k));
}

int RepeatedCombination(int n, int k)
{
    return Combination(n+k-1, k);
}

int main()
{
    int n;
    int k;
    std::cin >> n >> k;
    std::cout << RepeatedCombination(n, k);

    return 0;
}