#include <iostream>
#include <locale>
#define n 4
using namespace std;

void main()
{
    setlocale (LC_ALL, "RU"); // для виведення російською мовою
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Введите " << i + 1 << " число масива" << endl;
        cin >> a[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        int k=i;
        for (int j = i+1; j < n; j++)
        {
            if (a[k] > a[j])
            {
                k = j;
                cout << "Наименьшое число сейчас: " << a[j] << endl;
            }
        }
        cout << endl;
        swap(a[i], a[k]);
        cout << "Масив после свапа " << endl;
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    cout << "Отсортированный масив: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

