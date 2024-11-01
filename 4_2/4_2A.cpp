#include <iostream>

int Sum(int a, int b)
{
    return a+b;
}

int main()
{
    int a,b;
    std::cin >> a >> b;
    std::cout << Sum(a, b);

    return 0;
}
