//#include <iostream>
//#include <algorithm>
//#include <cmath>
//
//using namespace std;
//
//int main(void)
//{
//	cin.tie(NULL);
//	ios_base::sync_with_stdio(false);
//
//	int terret;
//	cin >> terret;
//
//	while (terret--)
//	{
//		int x1, y1, r1, x2, y2, r2;
//		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
//
//		if (r2 > r1)
//			swap(r1, r2);
//
//		// 거리를 구하는 식 ((x좌표의 차의 제곱) + (y좌표의 차의 제곱))
//		//sqrt는 제곱근, abs는 절대값, pow는 제곱을 구하는 함수
//		double dist = sqrt(pow(abs(x2 - x1), 2) + pow(abs(y2 - y1), 2));
//
//		if (dist == 0 && r1 == r2)
//		{
//			cout << -1 << '\n';
//			continue;
//		}
//		else if (dist == r1 + r2 || dist + r2 == r1)
//		{
//			cout << 1 << '\n';
//			continue;
//		}
//		else if (dist > r1 + r2 || dist + r2 < r1)
//		{
//			cout << 0 << '\n';
//			continue;
//		}
//		else if (dist < r1 + r2)
//		{
//			cout << 2 << '\n';
//			continue;
//		}
//	}
//
//	return 0;
//}