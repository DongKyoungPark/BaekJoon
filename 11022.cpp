#include <iostream>

using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a, b;
	int n;

	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a >> b;
		cout << "Case #" << i << ": " << a << " + " << b << " = " << a + b << "\n";
	}
	return 0;
}