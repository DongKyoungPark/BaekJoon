//#include <iostream>
//
//using namespace std;
//
//int people[15][15] = {};
//
//// 0층은 있고, 0호는 없음
//int Result(int _f, int _r)
//{
//	if (_r == 0)
//		return 0;
//	else if (_f == 0)
//		return _r;	
//	else if (people[_f][_r] != 0)
//		return people[_f][_r];
//
//	// 재귀를 사용해 직전 층의 호수들에 있는 수를 모두 더함
//	else
//	{
//		for (int i = 1; i <= _r; i++)
//		{
//			people[_f][_r] += Result(_f - 1, i);
//		}
//		return people[_f][_r];
//	}
//	return 0;
//}
//
//int main(void)
//{
//	cin.tie(NULL);
//	ios_base::sync_with_stdio(false);
//
//	int t;
//	int f = 0;
//	int r = 0;
//	int result = 0;
//
//	cin >> t;
//
//	for (int i = 0; i < 15; i++)
//	{
//		people[0][i] = i;
//		people[i][1] = 1;
//	}
//
//	for (int i = 0; i < t; i++)
//	{
//		cin >> f >> r;
//		result = Result(f, r);
//		cout << result << '\n';
//	}
//	return 0;
//}