#include <iostream>

using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	char ox[80] = {};
	int a[1000] = {};

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> ox;

		int sum = 0;
		int score = 1;
		for (int j = 0; ox[j] != '\0' ; j++)
		{
			if (ox[j] == 'O')
			{
				sum += score;
				score++;
			}
			else
				score = 1;
		}
		a[i] = sum;
	}

	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "\n";
	}

	return 0;
}