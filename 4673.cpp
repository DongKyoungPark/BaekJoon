//#include <iostream>
//#define N 10001
//
//using namespace std;
//
//int d(int n)
//{
//	int result = n;
//	while (n != 0)
//	{
//		result += n % 10;
//		n = n / 10;
//	}
//	return result;
//}
//
//int a[N];
//
//int main(void)
//{
//	for (int i = 0; i < N; i++)
//	{
//		a[i] = 1;
//	}
//
//	for (int i = 0; i < N; i++)
//	{
//		int index = d(i);
//
//		if (index <= N)
//			a[index] = 0;
//	}
//
//	for (int i = 0; i < N; i++)
//	{
//		if (a[i] != 0)
//			cout << i << "\n";
//	}
//
//	return 0;
//}