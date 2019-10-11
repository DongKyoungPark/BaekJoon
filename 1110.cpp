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
//	int m = -1;
//	int a, b;
//	int count = 0;
//
//	cin >> n;
//	
//	a = n / 10;
//	b = n % 10;
//
//	while (n != m)
//	{
//		int sum = a + b;
//		m = b * 10 + sum % 10;
//		count++;
//		a = m / 10;
//		b = m % 10;
//	}
//
//	cout << count << "\n";
//
//	return 0;
//}