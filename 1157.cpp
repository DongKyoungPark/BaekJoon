#include <iostream>
#include <string>
#define MAX 1000001

using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	char c[MAX];
	int a[26] = {};
	int aSize = sizeof(a) / sizeof(a[0]);
	int max;
	int count = 0;

	cin >> c;

	// 'A'�� �ƽ�Ű�ڵ� 65, 'a'�� �ƽ�Ű�ڵ� 97
	for (int i = 0; c[i] != NULL; i++)
	{
		// �빮���� ��� �ҹ��ڷ� 
		if (c[i] < 97)
			c[i] += 32;

		// ���� ���� ����
		a[c[i] - 97]++;
	}

	// ���� ū �� ã�Ƽ� ����
	max = a[0];
	for (int i = 1; i < aSize; i++)
	{
		if (max < a[i])
		{
			max = a[i];
			count = i;
		}
		// a[i] != 0�� ������ ���� ���ڰ� �˻��� ��츦 ����(ex.�ѱ��� �Է��� ���)
		else if (max == a[i] && a[i] != 0)
		{
			count = -1;
		}
	}

	if (count != -1)
		printf("%c", count + 65);
	else
		cout << "?" << "\n";

	return 0;
}