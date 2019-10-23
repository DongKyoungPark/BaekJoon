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
//	int three = 0;
//	int five = 0;
//
//	cin >> n;
//
//	if ((n % 5) == three)
//	{
//		cout << n / 5;
//	}
//	else
//	{
//		three++;
//		while (n - 3 * three > 0)
//		{
//			if ((n - 3 * three) % 5 == 0)
//			{
//				break;
//			}
//			three++;
//		}
//		if ((n - 3 * three) % 5 == 0)
//		{
//			five = (n - 3 * three) / 5;
//			cout << three + five;
//		}
//		else
//			cout << -1;
//	}
//	return 0;
//}