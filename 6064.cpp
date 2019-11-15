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
		y %= n; // y�� n�� ������

		while ((result <= m * n) && result % n != y) // y�� n�� ������ �ذ����� ���Ұ��
			result += m;

		if (result > m* n)
			cout << -1 << '\n';
		else
			cout << result << '\n';
	}

	return 0;
}