#include <locale>
#include <iostream>
using namespace std;

int part(int arr[], int start, int end)
{
	int pos = start;
	for (int i = start; i < end; i++)
	{
		if (arr[i] <= arr[end])
		{
			swap(arr[i], arr[pos]);
			pos++;
		}
	}
	swap(arr[end], arr[pos]);
	return pos;
}
void quick_sort(int arr[], int start, int end)
{
	if (start >= end)
	{
		return;
	}
	int pivot = part(arr, start, end);
	quick_sort(arr, start, pivot - 1);
	quick_sort(arr, pivot + 1, end);
}

void main()
{
	setlocale(LC_ALL, "RU");
	int n=5;
	cout << "Введите размер масива: ";
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Введите " << i + 1 << " число масива" << endl;
		cin >> a[i];
	}
	quick_sort(a, 0, n-1);
	cout << "Вот отсортированный масив:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}


