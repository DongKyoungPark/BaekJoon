//#include <iostream>
//
//using namespace std;
//
//int arr[10];
//bool visited[10];
//
//void BackTracking(int _count,int _start, int _N, int _M)
//{
//	if (_count == _M)
//	{
//		for (int i = 0; i < _M; i++)
//		{
//			cout << arr[i] << ' ';
//		}
//		cout << '\n';
//		return;
//	}
//	for (int i = _start; i <= _N; i++)
//	{
//		if (visited[i] == true)
//			continue;
//		else
//			visited[i] = false;
//
//		arr[_count] = i;
//		BackTracking(_count + 1,i+1, _N, _M);
//		visited[i] = false;
//
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
//	BackTracking(count,1, n, m);
//
//	return 0;
//}