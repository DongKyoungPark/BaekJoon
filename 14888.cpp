#include <iostream>

using namespace std;

int num[12];
int opCount[5];
int n;
int m = 1100000000;
int M = -1100000000;

void dfs(int _size, int _n)
{
	if (_n == n)
	{
		if (_size > M)
			M = _size;
		if (_size < m)
			m = _size;
	}

	for (int i = 0; i < 4; i++)
	{
		if (opCount[i])
		{
			--opCount[i];
			switch (i)
			{
			case 0: dfs(_size + num[_n], _n + 1);
				break;
			case 1: dfs(_size - num[_n], _n + 1);
				break;
			case 2: dfs(_size * num[_n], _n + 1);
				break;
			case 3: dfs(_size / num[_n], _n + 1);
				break;
			}
			++opCount[i];
		}
	}
}

int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> num[i];
	for (int i = 0; i < 4; i++)
		cin >> opCount[i];

	dfs(num[0], 1);
	cout << M << '\n' << m;

	return 0;
}
