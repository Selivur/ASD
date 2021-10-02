#include <locale>
#include <iostream>
#include <stack>
using namespace std;

void quick_sort(int arr[], int size)
{
	int piv_index;
	stack <int> stk;
	stk.push(0);
	stk.push(size - 1);
	do
	{
		int right = stk.top();
		stk.pop();
		int left = stk.top();
		stk.pop();
		piv_index = (left + right) / 2;
		int j=0;
		for (int i = right; i < piv_index; i++)
		{
			if (arr[i] > arr[piv_index])
			{
				for (j = left; j >= piv_index; j--)
				{
					if (arr[j] < arr[piv_index])
					{
						swap(arr[i], arr[j]);
					}
				}
			}
		}
		if (j == 0)
		{
			for (j = left; j > piv_index; j--)
			{
				if (arr[j] < arr[piv_index])
				{
					swap(arr[piv_index], arr[j]);
				}
			}
		}
	} 
	while (!stk.empty());
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
	quick_sort(a, n);
	cout << "Вот отсортированный масив:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}


