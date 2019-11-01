//#include <iostream>
//
//using namespace std;
//
//int main(void)
//{
//	cin.tie(NULL);
//	ios_base::sync_with_stdio(false);
//
//	int n;
//	int count = 0;
//
//	cin >> n;
//
//	for (int i = 0; i < n; i++)
//	{
//		int num;
//		cin >> num;
//		if (num > 2)
//		{
//			for (int j = 2; j < num; j++)
//			{
//				if (num % j == 0)
//					break;
//				if (j == num - 1)
//					count++;
//			}
//		}
//		else if (num == 2)
//			count++;		
//	}
//	cout << count << '\n';
//
//	return 0;
//}