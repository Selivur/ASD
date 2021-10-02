#include <iostream>
#include <locale>
using namespace std;

void shell_sort(int arr[], int size)
{
	for (int step = size / 2; step > 0; step /= 2)
	{
		cout << "Шаг: " << step << endl;

		for (int i = step; i < size; i++)
		{
			for (int j = i; j >= step; j -= step)
			{
				if (arr[j - step] > arr[j])
				{
					swap(arr[j], arr[j - step]);
				}
				for (int i = 0; i < size; i++)
				{
					cout << arr[i] << " ";
				}
				cout << endl;
			}
		}
	}
}

int main()
{
	setlocale(LC_ALL, "RUS");
	int n;
	cout << "Введите размер масива: ";
	cin >> n;
	int* a = new int[n];

	for (int i = 0; i < n; i++)
	{
		cout << "Введите " << i + 1 << " число масива" << endl;
		cin >> a[i];
	}
	shell_sort(a, n);
	cout << "Вот отсортированный масив:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}

