#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	int t = 0;
	vector<int> v;

	for (int i = 0; i < 8; i++)
	{
		cin >> n;
		v.push_back(n);
	}

	for (int i = 0; i < 8; i++)
	{
		if (i + 1 == v[i])
			t++;
		if (i + v[i] == 8)
			t--;
	}

	if (t == 8)
		cout << "ascending" << "\n";
	else if (t == -8)
		cout << "descending" << "\n";
	else
		cout << "mixed" << "\n";

	return 0;
}