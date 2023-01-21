#include <iostream>
using namespace std;

double foo(double tab[], int n)
{
    double temp = 0;
    for (int i = 0; i < n; i++)
    {
        if (tab[i] < 0 && (tab[i] > temp || temp ==0))
        {
            temp = tab[i];
        }
    }
    return temp;
}

int main()
{
    double tab[] = { -5.5, -1.2, 3.14, -2.7, 9.0 };
    int n = 5;
    cout << "Najwieksza liczba ujemna w tablicy to: " << foo(tab, n) << endl;
    return 0;
}
