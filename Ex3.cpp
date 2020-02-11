#include <iostream>

int main()
{
    const int size = 3;
    int A[size][size];
    int num;

    std::cout << "Введите число для вывода результата: ";
    std::cin >> num;

    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            A[i][j] = num;
            num *= 2;
        }
    }

    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
            std::cout << A[i][j] << " ";
        std::cout << std::endl;
    }

    return 0;
}