#include  <iostream>

using namespace std;

int n;
int prime[300000];

int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	while (cin >> n)
	{
		int count = 0;

		if (n == 0)
			break;

		for (int i = 2; i <= 2 * n; i++)
		{
			prime[i] = i;
		}
		for (int i = 2; i <= 2 * n; i++)
		{
			if (prime[i] == 0)
				continue;

			for (int j = i + i; j <= 2 * n; j += i)
			{
				prime[j] = 0;
			}
		}

		for (int i = n+1; i <= 2 * n; i++)
		{
			if (prime[i] != 0)
				count++;
		}
		cout << count << '\n';
	}

	return 0;
}