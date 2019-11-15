#include <iostream>
#include <vector>

using namespace std;

int N;
vector <pair<int, int>> v;

void hanoi(int num, int st, int emp, int des)
{
	if (num == 1) 
		v.push_back({ st, des });

	else
	{
		hanoi(num - 1, st, des, emp);
		v.push_back({ st, des });
		hanoi(num - 1, emp, st, des);
	}
}

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(false);

	cin >> N;

	hanoi(N, 1, 2, 3);

	cout << v.size() << "\n";
	for (int i = 0; i < v.size(); i++)
		cout << v[i].first << " " << v[i].second << "\n";

	return 0;
}
