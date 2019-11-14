//#include <iostream>
//
//using namespace std;
//
//int arr[10];
//
//void BackTracking(int _count, int _N, int _M)
//{
//	// 원하는 개수(_M개)만큼 골랐다면 수열을 출력하고 재귀를 종료
//	if (_count == _M)
//	{
//		for (int i = 0; i < _M; i++)
//		{
//			cout << arr[i] << ' ';
//		}
//		cout << '\n';
//		return;
//	}
//	
//	for (int i = 1; i <= _N; i++)
//	{
//		arr[_count] = i;
//		BackTracking(_count + 1, _N, _M); // count가 M이 될때까지 재귀가 반복
//	}
//}
//
//int main(void)
//{
//	cin.tie(NULL);
//	ios_base::sync_with_stdio(false);
//
//	int n, m;
//	int count = 0;
//
//	cin >> n >> m;
//
//	BackTracking(count, n, m);
//
//	return 0;
//}