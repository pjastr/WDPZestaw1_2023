#include <iostream>

using namespace std;

int czescCalkowitaPierwiastka(int n);

int sumaKoncowa(int n);

int main()
{
	int n;
	cin >> n;
	cout << sumaKoncowa(n) << endl;

}

int czescCalkowitaPierwiastka(int n)
{
	int i = 0;
	while (i * i <= n)
	{
		i++;
	}
	return i - 1;
}

int sumaKoncowa(int n)
{
	int temp = 0;
	for (int i = 0; i <= n; i++)
	{
		temp += czescCalkowitaPierwiastka(i);
	}
	return temp;
}
