#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, x, y;
	vector<pair<int, int>> v;
	vector<pair<int, int>>::iterator i;

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> x >> y;
		v.push_back(pair<int, int>(x, y));
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < N; i++)
	{
		cout << v[i].first << ' ' << v[i].second << '\n';
	}

	return 0;
}