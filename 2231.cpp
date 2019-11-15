#include <iostream>
#define SIZE 1000000

using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	int result = 0;

	cin >> n;

	for (int i = 0; i <= SIZE; i++)
	{
		// 생성자는 항상 분해합보다 작다.
		// 모든 경우를 탐색
		int answer = i;
		int temp = i;

		while (temp != 0)
		{
			// 원래 수에 각 자리의 수를 다 더한다.
			answer += temp % 10;
			temp /= 10;
		}

		if (answer == n)
		{
			cout << i;
			return 0;
		}
	}
	cout << 0;
	return 0;
}