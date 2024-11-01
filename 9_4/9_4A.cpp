#include <iostream>
#include <stack>

int stackOperation(int operationNumber, std::stack<int> &stack)
{
    int result;
    switch (operationNumber)
    {
        case 1:
            int value;
            std::cin >> value;
            stack.push(value);
            result = value;
            break;
        case 2:
            if (stack.size() < 1)
            {
                result = -1;
            }
            else
            {
                stack.pop();
                result = stack.size() < 1 ? -1 : stack.top();
            }
            break;
    }

    return result;
}

int main()
{
    std::stack<int> valueStack = std::stack<int>();
    int operationCount;

    std::cin >> operationCount;

    for (int i = 0; i < operationCount; i++)
    {
        int operationType;
        std::cin >> operationType;
        std::cout << stackOperation(operationType, valueStack) << '\n';
    }

    return 0;
}