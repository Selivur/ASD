#include <iostream>
#include <locale>
using namespace std;
#define n 10 // задамо n статично, щоб не вводити динамічні масиви

void main()
{
    setlocale(LC_ALL, "RU"); // для виведення російською мовою
    int k = 1; //вводимо k для того, щоб масив починав сортувати з певного місця, а не спочатку
    int A[n] {1, 2, 8, 7, 6, 5, 4, 3, 9, 10};
    /*
    for (int i = 0; i < n; i++)
    {
        cout << "Введите " << i + 1 << " число масива" << endl;
        cin >> A[i];
    }
    */
    

    //TODO
    
    for (int N = n / 2; N > 0; N /= 2)
    {
        cout << "i уменьшилось" << endl;
        for (int i = N*2-1; i < n; i*=2)
        {
            k = i;
            for (int j=i/2; j >= N-1; j /= 2)
            {
                cout << "i=" << i << " " << "j=" << j << endl;
                cout << "Масив вошёл во 2 цикл" << endl;
                if (A[k] < A[j])
                {
                    swap(A[k], A[j]);
                    cout << "Масив после смены двух чисел" << endl;
                    for (int i = 0; i < n; i++)
                    {
                        cout << A[i] << " ";
                    }
                    cout << endl;
                }
                else if (j == 0)
                {
                    break;
                }
                k /= 2;
            }
        }
        if (N == 0)
        {
            break;
        }
    }
    cout << "Вот отсортированный масив:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}

