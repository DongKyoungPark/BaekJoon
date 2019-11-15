#include <iostream>

using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	char input[101] = {};
	int n, sum = 0;

	cin >> n;
	cin >> input;

	for (int i = 0; i < n; i++)
	{
		sum += (input[i] - 48);
	}
	cout << sum << "\n";

	return 0;
}