#include <locale>
#include <iostream>
using namespace std;
void sort(int arr[], int a1[], int a2[], int n)
{
	int a1min = 0;
	int a2min = 0;
	int arrmin = 0;
	while (a1min < (n / 2) && a2min < (n - (n / 2)))
	{
		if (a1[a1min] <= a2[a2min])
		{
			arr[arrmin] = a1[a1min];
			a1min++;
		}
		else
		{
			arr[arrmin] = a2[a2min];
			a2min++;
		}
		arrmin++;
	}
	while (a1min < (n / 2))
	{
		arr[arrmin] = a1[a1min];
		arrmin++;
		a1min++;
	}
	while (a2min < (n - (n / 2)))
	{
		arr[arrmin] = a2[a2min];
		arrmin++;
		a2min++;
	}
}

void mergesort(int arr[], int n)
{
	if (n < 2)
		return;
	if (n == 2)
		if (arr[0] > arr[n])
		{
			swap(arr[0], arr[n]);
			return;
		}
	int mid = n / 2;
	int* a1 = new int[n / 2];
	int* a2 = new int[n - (n / 2)];
	for (int i = 0; i < (n / 2); i++)
	{
		a1[i] = arr[i];
	}
	for (int i = n / 2; i < n; i++)
	{
		a2[i - (n / 2)] = arr[i];
	}
	mergesort(a1, n/2);
	mergesort(a2, n-(n/2));
	sort(arr, a1, a2, n);
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
	mergesort(a, n);
	cout << "Вот отсортированный масив:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}
