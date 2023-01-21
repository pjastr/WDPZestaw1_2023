#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Podaj liczbe elementow: ";
    cin >> n;
    vector<int> temp;
    int num;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        if (num % 3 == 0 && num % 2 != 0)
        {
            temp.push_back(num);
        }
    }
    cout << "Liczby podzielne przez 3 i niepodzielne przez 2: ";
    for (int elem : temp)
    {
        cout << elem << endl;
    }
    return 0;
}
