#include <iostream>
#define PI 3.14159265358979323846

using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	long double R;

	cin >> R;
	cout << fixed;
	cout.precision(6);

	cout << R * R * PI << '\n';
	cout << 2.0 * R * R << '\n';

	return 0;
}