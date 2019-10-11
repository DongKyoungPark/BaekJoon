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
//	int a[1001] = {};
//
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> m;
//
//		int total = 0;
//		for (int j = 0; j < m; j++)
//		{
//			cin >> a[j];
//			total += a[j];
//		}
//
//		double avg = total / m;
//		int count = 0;
//		for (int k = 0; k < m; k++)
//		{
//			if (avg < a[k])
//				count++;
//		}
//		double result = (double)count / (double)m * 100;
//
//		printf("%.3lf%%\n", result);
//	}
//
//	return 0;
//}