#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	vector<int> v;
	int count = 0;
	int max = 101;

	for (int i = 0; i < 9; i++)
	{
		cin >> n;
		v.push_back(n);
	}

	max = v[0];

	for (int i = 0; i < 9; i++)
	{
		if (max < v[i])
		{
			max = v[i];
			count = i;
		}

	}

	cout << max << "\n" << count + 1 << "\n";

	return 0;
}