#include <iostream>

using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	int x, y;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;
		y -= x;

		int moveLength = 0;
		int moveCount = 0;
		while (y > 0)
		{
			moveLength++;
			y -= moveLength * 2;
			moveCount += 2;
		}
		if (y + moveLength <= 0)
			moveCount--;

		cout << moveCount << '\n';
	}
	return 0;
}