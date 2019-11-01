//#include <iostream>
//
//using namespace std;
//
//void primeNumber(int _m, int _n)
//{
//	int count = 0;
//	int sum = 0;
//	int max = 100001;
//
//	for (int i = _m; i <= _n; i++)
//	{
//		for (int j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//				count++;
//		}
//		if (count == 0 && i != 1)
//		{
//			sum += i;
//			if (max > i)
//				max = i;
//		}
//		count = 0;
//	}
//	if (max == 100001)
//		cout << -1 << '\n';
//	else
//		cout << sum << '\n' << max << '\n';
//}
//
//int main(void)
//{
//	cin.tie(NULL);
//	ios_base::sync_with_stdio(false);
//
//	int m, n;	
//
//	cin >> m >> n;
//	primeNumber(m, n);
//
//	return 0;
//}