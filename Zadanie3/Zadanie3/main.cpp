#include <iostream>
using namespace std;

int f(int n);

int main()
{
    int n = 7;
    cout << "f(" << n << ") = " << f(n) << endl;
    return 0;
}

int f(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return f(n - 1) + 2 * f(n - 2);
}
