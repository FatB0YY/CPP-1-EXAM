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
return 0;