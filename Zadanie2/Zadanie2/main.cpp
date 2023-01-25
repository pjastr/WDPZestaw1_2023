#include <iostream>

using namespace std;

int main()
{
	cout << "Podaj ile liczb chcesz wprowadzic" << endl;
	int n;
	cin >> n;
    int num, evenSum = 0, oddSum = 0;
    int i = 0;
    while (i<n)
    {
        cout << "Podaj liczb3" << endl;
        cin >> num;
        if (num % 2 == 0)
        {
            evenSum += num;
        }
        else
        {
            oddSum += num;
        }
        i++;
    }
    cout << "Suma liczb parzystych: " << evenSum << endl;
    cout << "Suma liczb nieparzystych: " << oddSum << endl;
    return 0;
}