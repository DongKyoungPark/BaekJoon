#include <iostream>

using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	long long a, b, c;
	cin >> a >> b >> c;

	if (c > b)
		cout << a / (c - b) + 1;
	else
		cout << -1;

	return 0;
}