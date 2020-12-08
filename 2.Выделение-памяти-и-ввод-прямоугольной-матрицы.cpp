#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <conio.h>
#include <cmath>
#include <regex>
#include <sstream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    //ввод матрицы
    int n, m;
    cout << "Введите n строк = ";
    cin >> n;
    cout << "Введите m столбцов = ";
    cin >> m;

    int **arr = new int *[m];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
        cout << endl;
    }

    //вывод матрицы
    for (int i = 0; i < n; i++)
    {
        cout << endl;
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
    }
    for (int i = 0; i < n; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
    getch();
    return 0;
}