#include <iostream>
using namespace std;

int f(int n);

int main()
{
    cout << f(0) << endl;;
    cout << f(1) << endl;;
    cout << f(2) << endl;;
    cout << f(3) << endl;;
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
