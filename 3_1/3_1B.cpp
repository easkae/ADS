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

int main()
{
    int n;
    int k;
    std::cin >> n >> k;
    std::cout << Combination(n, k);

    return 0;
}