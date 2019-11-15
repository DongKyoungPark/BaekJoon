#include <iostream>

using namespace std;

long long n[91];

long long Fibonachi(int _x)
{
	if (_x == 0 || _x ==1)
		return _x;

	if (n[_x] != 0)
		return n[_x];

	return n[_x] = Fibonachi(_x - 1) + Fibonachi(_x - 2);
}

int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	cout << Fibonachi(n);

	return 0;
}