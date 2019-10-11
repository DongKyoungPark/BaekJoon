//#include <iostream>
//#define N 1001
//
//using namespace std;
//
//bool hanSu(int n)
//{
//	if (n ==1000)
//		return false;
//
//	int a = (int)(n / 100);
//	int b = (int)((n - a * 100) / 10);
//	int c = (int)(n % 10);
//
//	if ((a == b && b == c) || (a == 0 && b == 0) || (a == 0) || (a - b) == (b - c))
//		return true;
//	else
//		return false;
//}
//
//int main(void)
//{
//	int X;
//	int count = 0;
//
//	cin >> X;
//	for (int i = 1; i <= X; i++)
//	{
//		if (hanSu(i) == true)
//			count++;
//	}
//	cout << count << "\n";
//
//	return 0;
//}