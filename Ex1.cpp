#include <iostream>

int main()
{
    srand(time(nullptr));
    const int row = 3;
    const int col = 4;
    int A[row][col];
    int sumRow[row] = {};
    int sumCol[col] = {};
    int totalSum = 0;

    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            A[i][j] = rand() % 10;
            std::cout << A[i][j] << "    ";
            sumRow[i] += A[i][j];
            sumCol[j] += A[i][j];
        }
        std::cout << " | " << sumRow[i] << std::endl;
    }
    std::cout << "--------------------------" << std::endl;
    for (int j = 0; j < col; j++)
    {
        std::cout << sumCol[j] << "   ";
        totalSum += sumCol[j];
    }
    std::cout << " | " << totalSum << std::endl;

    return 0;
}