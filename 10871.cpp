#include <iostream>

using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, x;

	int a[10000] = { 0 };

	cin >> n >> x;
	for (int i = 0; i < n; i++)
		cin >> a[i];

	for (int i = 0; i < n; i++)
	{
		if (a[i] < x) 
		cout << a[i] << ' ';
	}

	return 0;
}