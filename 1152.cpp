#include <iostream>
#include <string>
#define MAX 1000001

using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	string s;
	int count = 0;

	// string Ÿ�Կ� ������ ����ϴ� �Է��� ����
	getline(cin, s);

	if (s.length() >= 1)
	{
		if (s[0] != ' ')
			count++;
	}

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == ' ')
		{
			//1. ���� ���� ���� -> "�ܾ� (����) (����) �ܾ�" �� �����̹Ƿ�, �ܾ ����.
			if (s[i + 1] == ' ')
				count++;
			//2. ���� ���� ���� -> "�ܾ� (����) �ܾ�" �� ����̹Ƿ�, �ܾ ����.
			else if (s[i + 1])
				count++;
		}
	}
	cout << count << "\n";

	return 0;
}