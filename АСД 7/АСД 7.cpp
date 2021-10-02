#include <locale>
#include <iostream>
using namespace std;

void radsort(string arr[], int n)
{
	string max=arr[0];
	for (int i=0; i < n; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}
	for (int i = max.length()-1; i >-1 ; i--)
	{
		int integer=0;
		for (int j = 0; j < 10; j++)
		{
			for (int k = 0; k <n; k++)
			{

				if ((int)arr[k][i] - 48 ==j)
				{
					swap(arr[k], arr[integer]);
					++integer;
					cout << "Масив после свапа" << endl;
					for (int i = 0; i < n; i++)
					{
						cout << arr[i] << " ";
					}
				}
			}
		}
	}
	cout << arr[1].length();
}

void main()
{
	setlocale(LC_ALL, "RU");
	int n;
	cout << "Введите размер масива: ";
	cin >> n;
	string* a = new string[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Введите " << i + 1 << " число масива( в формате 001)" << endl;
		cin >> a[i];
	}
	radsort(a,  n);
	//string d = a[1];
	//cout << endl << (int)d[1] - 48 <<endl;
	cout << "Вот отсортированный масив:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}


