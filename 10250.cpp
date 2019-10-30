//#include <iostream>
//
//using namespace std;
//
//void result(int _h, int _w, int _n)
//{
//	int floor = _n % _h;
//	int ho = _n / _h;
//
//	if (floor == 0)
//	{
//		cout << _h;
//	}
//	else
//	{
//		ho += 1;
//		cout << floor;
//	}
//
//	if (ho < 10)
//		cout << '0' << ho << '\n';
//	else
//		cout << ho << '\n';
//
//}
//
//int main(void)
//{
//	cin.tie(NULL);
//	ios_base::sync_with_stdio(false);
//
//	int t;
//	int h, w, n;
//
//	cin >> t;
//
//	for (int i = 0; i < t; i++)
//	{
//		cin >> h >> w >> n;
//		result(h, w, n);
//	}
//	return 0;
//}