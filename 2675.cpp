#include <iostream>
#include <stdio.h>

using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	char c[20] = {};
	int input;
	int repeat;

	cin >> input;
	for (int i = 0; i < input; i++)
	{
		cin >> repeat;
		cin >> c;
		getchar();

		for (int j = 0; c[j] != NULL; j++)
		{
			for (int k = 0; k < repeat; k++)
			{
				cout << c[j];
			}
		}
		cout << "\n";
	}
	return 0;
}