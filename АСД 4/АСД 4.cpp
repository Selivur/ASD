#include <iostream>
#include <locale>
#define N 5
using namespace std;

void function(int* b, int n, int m,  bool* ex)
{
    if (m == n)
    {
        return;
    }
    else if (n < m)
    {
        cout << "цикл движется в правую сторону" << endl;
        for (int i = n; i < m; i++)
        {
            if (b[i] > b[i + 1])
            {
                swap(b[i], b[i + 1]);
                cout << "Масив после свапа: " << endl;
                for (int i = 0; i < N; i++)
                {
                    cout << b[i] << " ";
                }
            }
        }
    }
    else
    {
        cout << "цикл движется в левую сторону" << endl;
        for (int i = n; i > m; i--)
        {
            if (b[i] < b[i - 1])
            {
                swap(b[i], b[i - 1]);
                *ex = true;
                cout << "Масив после свапа: " << endl;
                for (int i = 0; i < N; i++)
                {
                    cout << b[i] << " ";
                }
            }
        }
    }
}

void main()
{
    setlocale(LC_ALL, "RU");
    int a[N];
    int *pa=a;
    int l = 0;
    int r = N - 1;
    bool ex;
    bool *pex=&ex;

    for (int i = 0; i < N; i++)
    {
        cout << "Введите " << i + 1 << " число масива" << endl;
        cin >> a[i];
    }
    do
    {
        ex = false;

        function(pa, l, r, pex);
        r--;

        function(pa, r, l, pex);
        l++;
    } 
    while (ex);
    cout << "Отсортированный масив: " << endl;
    for (int i = 0; i < N; i++)
    {
        cout << a[i] << " ";
    }
}

