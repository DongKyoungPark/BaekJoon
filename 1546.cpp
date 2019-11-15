#include <iostream>

using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	int max = 0;
	double average = 0, sum = 0;
	float v[1001] = { };

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	max = v[0];
	for (int i = 0; i < n; i++)
	{
		if (max < v[i])
			max = v[i];
	}

	for (int i = 0; i < n; i++)
	{
		v[i] = v[i] / max * 100;
	}

	for (int i = 0; i < n; i++)
	{
		sum += v[i];
	}
	average = sum / n;

	cout << average << "\n";

	return 0;
}