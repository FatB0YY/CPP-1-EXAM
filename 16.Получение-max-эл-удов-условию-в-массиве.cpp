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

    int n;
    cout << "Введите n = ";
    cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max &&) // условие &&
        {
            max = arr[i];
        }
    }

    if (max != 0)
    {
        cout << "max = " << max << endl;
    }
    else
    {
        cout << "Max удов условию нет";
    }

    delete[] arr;
    getch();
    return 0;
}