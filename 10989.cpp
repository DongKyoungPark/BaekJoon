//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int main(void)
//{
//	cin.tie(NULL);
//	ios_base::sync_with_stdio(false);
//
//	int n;
//	int arr[10001] = {};
//	int size = sizeof(arr) / sizeof(arr[0]);
//
//	cin >> n;
//
//	for (int i = 0; i < n; i++)
//	{
//		int m;
//		cin >> m;
//		arr[m]++;
//	}
//
//	// 시간복잡도 O(n+10000)
//	for (int i = 0; i <= 10000; i++)
//	{
//		while(arr[i]--)
//		cout << i << '\n';
//	}
//
//	return 0;
//}