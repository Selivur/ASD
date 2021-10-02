#include <iostream>
#include <locale>
using namespace std;
#define n 4 // задамо n статично, щоб не вводити динамічні масиви

void main()
{
    setlocale(LC_ALL, "RU"); // для виведення російською мовою
    int j = 0;
    int k = 1; //вводимо k для того, щоб масив починав сортувати з певного місця, а не спочатку
    int A[n];  
    double z = 2.5;
    float x = 2.5;
    float p;
    p = x / 2;
    cout << p;
    for (int i=0; i < n; i++)
    {
    cout << "Введите " << i+1<<" число масива"<<endl;
    cin >> A[i];
    }
    for (int i = 1; i != n; i = k + 1)
    {
        cout << "Масив вошел в 1 цикл" << endl;
        k = i; 
        for (j; j >= 0; j-- && i--)
        {
            cout << "i="<<i<<" "<<"j="<<j << endl;
            cout << "Масив вошёл во 2 цикл" << endl;
            if (A[i] < A[j])
            {
                swap(A[i], A[j]);
                cout << "Масив после смены двух чисел" << endl;
                for (int i = 0; i < n; i++)
                {
                    cout << A[i] << " ";
                }
                cout << endl;
            }
            else
            {
                break; // щоб не проганяти вже відсортовану частину знову, просто вийдемо з циклу
            }
        }
    j=k;
    }
    cout << "Вот отсортированный масив:"<< endl;
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}

