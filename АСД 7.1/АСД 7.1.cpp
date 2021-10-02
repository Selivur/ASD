#include <locale>
#include<iostream> 
using namespace std;

void radsort(int arr[], int n)
{
    int m = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > m)
            m = arr[i];
    for (int exp = 1; m / exp > 0; exp *= 10)
    {
        int* arr2 = new int[n];
        int i;
        int queue[10] = { 0 };
        for (i = 0; i < n; i++)
        {
            queue[(arr[i] / exp) % 10]++;
        }
        for (i = 1; i < 10; i++)
        {
            queue[i] += queue[i - 1];
        }
        for (i = n - 1; i >= 0; i--)
        {
            arr2[queue[(arr[i] / exp) % 10] - 1] = arr[i];
            queue[(arr[i] / exp) % 10]--;
        }
        for (i = 0; i < n; i++)
        {
            arr[i] = arr2[i];
        }
    }
}

void main()
{
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Введите размер масива: ";
    cin >> n;
    int* a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Введите " << i + 1 << " число масива" << endl;
        cin >> a[i];
    }
    radsort(a, n);
    cout << "Вот отсортированный масив:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    delete[] a;
}