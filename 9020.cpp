#include <iostream>
#define SIZE 10001

using namespace std;

int prime[10001] = {};

int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int t;

	cin >> t;

	for (int i = 2; i <= SIZE; i++) // �����佺�׳׽��� ü
	{
		for (int j = i + i; j <= SIZE; j += i)
		{
			if (prime[j] == 0)
				prime[j] = 1;
		}
	}

	for (int i = 0; i < t; i++) // �������� ���� ã�� �κ�
	{
		int input;
		int first, second; // first�� second�� �μ��� ���� �ּҰ� �ǰԲ��ϱ� ����

		cin >> input;
		for (int j = 0; j < input; j++)
		{
			first = input - j;
			second = j;
			if (prime[j] == 0 && prime[input - j] == 0) // j�� input-j�� �Ҽ����� �Ǻ�
			{
				if (input - j <= j)
				{
					cout << first << ' ' << second << '\n';
					break;
				}
			}
		}
	}
	return 0;
}