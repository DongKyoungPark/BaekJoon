#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, string> _a, pair<int, string> _b)
{
	return _a.first < _b.first; // pair�� int�� �κ�(����)�� ���� ���̰� ���� ������ ����
}

int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	// pair<int,string>�� ���� vector�� Nũ��� �ʱ�ȭ
	vector<pair<int, string>> info(N); 

	for (int i = 0; i < N; i++)
	{
		// ����, �̸� ������ �Է�
		cin >> info[i].first >> info[i].second;
	}

	// pair�� �����ִ� �����͸� �����Ҷ��� sort()����ϸ� �ȵ�.
	// stable_sort : ���� ������ ������ �ٸ� ��ҵ��� ������ ���� ���� ���� ����
	stable_sort(info.begin(), info.end(), compare);

	for (int i = 0; i < N; i++)
	{
		cout << info[i].first << ' ' << info[i].second << '\n';
	}

	return 0;
}