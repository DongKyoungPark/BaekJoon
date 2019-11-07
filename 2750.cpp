//#include <iostream>
//
//using namespace std;
//
//int main(void)
//{
//	cin.tie(NULL);
//	ios_base::sync_with_stdio(false);
//
//	int n, m;
//	int temp = 0;
//	int arr[1001] = {};
//
//	cin >> n;
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> m;
//		arr[i] = m;
//	}
//
//	for (int i = 0; i < n-1; i++)
//	{
//		for (int j = i+1; j < n; j++)
//		{
//			if (arr[i] > arr[j])
//			{
//				temp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = temp;
//			}
//		}
//	}
//	
//	for (int i = 0; i < n; i++)
//	{
//		cout << arr[i] << '\n';
//	}
//
//	return 0;
//}