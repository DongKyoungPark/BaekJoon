#include <iostream>

using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int t;
	int m, n, x, y;
	int result;

	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> m >> n >> x >> y;
		result = x;
		y %= n; // y가 n과 같을때

		while ((result <= m * n) && result % n != y) // y가 n과 같을때 해결하지 못할경우
			result += m;

		if (result > m* n)
			cout << -1 << '\n';
		else
			cout << result << '\n';
	}

	return 0;
}