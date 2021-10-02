#include <iostream>
#include <locale>
#define n 4
using namespace std;

void main()
{
    setlocale(LC_ALL, "RU"); // для виведення російською мовою
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Введите " << i + 1 << " число масива" << endl;
        cin >> a[i];
    }
    for (int i = n-1; i >=0 ; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[j] > a[j+1])
            {
                swap(a[j], a[j+1]);
                cout << "Масив после свапа " << endl;
                for (int i = 0; i < n; i++)
                {
                    cout << a[i] << " ";
                }
                cout << endl;
            }
        }
    }
    cout << "Отсортированный масив: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}


