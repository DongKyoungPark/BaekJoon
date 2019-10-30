//#include <iostream>
//
//using namespace std;
//
//int main(void)
//{
//	cin.tie(NULL);
//	ios_base::sync_with_stdio(false);
//
//	int X;
//	int sum = 0;	// 등차수열의 합
//	int n = 1;		// 몇번째 줄인지
//
//	cin >> X;
//	while (sum < X) // X가 있는 줄의 등차수열 합까지 반복
//	{
//		sum = (n * (n + 1)) / 2;
//		n++;
//	}
//	if (n % 2 == 1)
//		cout << n - 1 - sum + X << '/' << 1 + sum - X; // 마지막에 n++해줘서 -1해주고
//	else
//		cout << 1 + sum - X << '/' << n - 1 - sum + X; // sum과 X의 차이만큼 빼고 더해서 출력
//
//	return 0;
//}