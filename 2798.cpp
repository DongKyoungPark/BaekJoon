//#include <iostream>
//
//using namespace std;
//
//int main(void)
//{
//	cin.tie(NULL);
//	ios_base::sync_with_stdio(false);
//
//	int arr[100];
//	int n, m;
//	int min = 300001;
//	int sum = 0;
//	int result = 0;
//
//	cin >> n >> m;
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			for (int k = j + 1; k < n; k++)
//			{
//				sum = arr[i] + arr[j] + arr[k];
//				if (sum <= m)
//				{
//					if (sum == m)
//					{
//						cout << m;
//						return 0;
//					}
//					else if (m - sum < min)
//					{
//						min = m - sum;
//						result = sum;
//					}
//				}
//			}
//		}
//	}
//	cout << result;
//
//	return 0;
//}