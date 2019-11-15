#include <iostream>

using namespace std;

int main(void)
{
	int a = 0, b = 0;
	int t;

	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> a >> b;
		cout << a + b << endl;
	}

	return 0;
}