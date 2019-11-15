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

	for (int i = 2; i <= SIZE; i++) // 에라토스테네스의 체
	{
		for (int j = i + i; j <= SIZE; j += i)
		{
			if (prime[j] == 0)
				prime[j] = 1;
		}
	}

	for (int i = 0; i < t; i++) // 골드바흐의 수를 찾는 부분
	{
		int input;
		int first, second; // first와 second는 두수의 차가 최소가 되게끔하기 위함

		cin >> input;
		for (int j = 0; j < input; j++)
		{
			first = input - j;
			second = j;
			if (prime[j] == 0 && prime[input - j] == 0) // j와 input-j가 소수인지 판별
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