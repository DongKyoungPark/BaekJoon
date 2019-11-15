#include <iostream>

using namespace std;

struct info
{
	int weight;
	int height;
};

int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	info people[51];
	int n;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> people[i].weight >> people[i].height;
	}

	for (int i = 0; i < n; i++)
	{
		int count = 1;
		for (int j = 0; j < n; j++)
		{
			if (i == j)
				continue;
			if (people[i].weight < people[j].weight && people[i].height < people[j].height)
				count++;
		}
		cout << count << ' ';
	}
	return 0;
}