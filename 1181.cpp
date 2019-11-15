#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(string _a, string _b)
{
	if (_a.size() == _b.size())
		return _a < _b; // ũ�Ⱑ ���ٸ� ���ĺ� �������
	else
		return _a.size() < _b.size(); // ũ�Ⱑ �ٸ��ٸ� ũ�Ⱑ ���� ������� ����
}

int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	char c[51];
	vector <string> v;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> c;
		v.push_back(c);
	}

	sort(v.begin(), v.end(), compare);

	string temp;

	for (int i = 0; i < n; i++)
	{
		if (temp == v[i])
			continue; // �ߺ� ����
		cout << v[i] << '\n';
		temp = v[i];
	}

	return 0;
}