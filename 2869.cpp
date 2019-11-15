#include <iostream>

using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a, b, v;
	int dest = 0;
	cin >> a >> b >> v;

	dest = (v - b - 1) / (a - b) + 1;

	cout << dest << '\n';

	return 0;
}