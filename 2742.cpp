#include <iostream>

using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;

	cin >> n;

	for (int i = n + 1; i > 1; i--)
	{
		cout << i - 1 << "\n";
	}

	return 0;
}