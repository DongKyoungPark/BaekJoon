#include <iostream>

using namespace std;

int S[22][22];
int N;
int A[11];
int B[11];
int m = 1000000;

int Sub(int _a, int _b)
{
	if (_a > _b)
		return _a - _b;
	else
		return _b - _a;
}

int Min(int _a, int _b)
{
	if (_a < _b)
		return _a;
	else
		return _b;
}

int Cal()
{
	int sumA = 0;
	int sumB = 0;
	int result = 0;

	for (int i = 0; i < N/2; i++)
	{
		for (int j = 0; j < N/2; j++)
		{
			if (i == j)
				continue;

			sumA += S[A[i]][A[j]];
			sumB += S[B[i]][B[j]];
		}
	}

	result = Sub(sumA, sumB);
	m = Min(result, m);
	return 0;
}

int SubSet()
{
	int n = N;
	int cntA, cntB;

	for (int i = 0; i < (1<<n); i++)
	{
		cntA = 0;
		cntB = 0;
		for (int j = 0; j < n; j++)
		{
			if (i & (1 << j))
			{
				if (cntA > N / 2)
					break;

				A[cntA++] = j + 1;
			}
			else
			{
				if (cntB > N / 2)
					break;

				B[cntB++] = j + 1;
			}
			if (cntA == N / 2 && cntB == N / 2)
			{
				Cal();
			}
		}
	}
	return 0;
}

int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			cin >> S[i][j];
		}
	}

	SubSet();
	cout << m;

	return 0;
}