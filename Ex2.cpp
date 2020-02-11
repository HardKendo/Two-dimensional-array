#include <iostream>

int main()
{
    srand(time(0));
    const int n = 5, m = 10;
    int A[n][m], B[n][n];

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            A[i][j] = rand() % 50;
            std::cout << A[i][j] << " ";
            B[i][j / 2] = A[i][j - 1] + A[i][j];
        }
        std::cout << std::endl;
    }

    std::cout << "\nB:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            std::cout << B[i][j] << " ";
        std::cout << std::endl;
    }

    return 0;
}