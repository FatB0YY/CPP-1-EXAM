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
    setlocale(LC_CTYPE, "Russian");

    int n;
    int n1;
    cout << "Введите n = ";
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Введите n1 = ";
    cin >> n1;

    int *arr1 = new int[n1];

    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }

    for (int i = 0; i < n1 - 1; i++)
    {
        for (int j = 0; j < n1 - i - 1; j++)
        {
            if (arr1[j] > arr1[j + 1])
            {
                int temp = arr1[j];
                arr1[j] = arr1[j + 1];
                arr1[j + 1] = temp;
            }
        }
    }
    int i = 0;
    while (arr[i] == arr1[i] && arr[i] && arr1[i])
        i++;
    if (i == n || i == n1)
        cout << "true" << endl;
    else
        cout << "false" << endl;
    delete[] arr;
    delete[] arr1;

    getch();
    return 0;
}