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
//	int arr[10000] = {};
//	int index = 0;
//	int count = 0;
//	int num = 666;
//
//	cin >> n;
//
//	while (index <= n - 1)
//	{
//		int flag = num;
//
//		while(flag)
//		{
//			if ((flag % 10) == 6)
//				count++;
//			else
//				count = 0;
//			if (count == 3)
//			{
//				arr[index] = num;
//				index++;
//				break;
//			}
//			flag /= 10;
//		}
//		num++;
//	}
//
//	cout << arr[n - 1] << '\n';
//
//	return 0;
//}