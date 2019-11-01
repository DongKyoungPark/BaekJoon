//#include <iostream>
//#define MAX 1000001
//
//using namespace std;
//
////에라토스테네스의 체(소수 구하기)
//void primeNumber(int _m, int _n)
//{
//	int number = MAX;
//	int prime[MAX] = {};
//
//	for (int i = 2; i <= number; i++)
//	{
//		prime[i] = i;
//	}
//
//	for (int i =2; i <= number; i++)
//	{
//		if (prime[i] == 0)
//			continue;
//
//		for (int j = i+i; j <= number; j += i)
//		{
//			prime[j] = 0;
//		}
//	}
//
//	for (int i = _m; i <= _n; i++)
//	{
//		if (prime[i] != 0)
//			cout << prime[i] << '\n';
//	}
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