//#include <iostream>
//#define SIZE 1000000
//
//using namespace std;
//
//int main(void)
//{
//	cin.tie(NULL);
//	ios_base::sync_with_stdio(false);
//
//	int n;
//	int result = 0;
//
//	cin >> n;
//
//	for (int i = 0; i <= SIZE; i++)
//	{
//		// �����ڴ� �׻� �����պ��� �۴�.
//		// ��� ��츦 Ž��
//		int answer = i;
//		int temp = i;
//
//		while (temp != 0)
//		{
//			// ���� ���� �� �ڸ��� ���� �� ���Ѵ�.
//			answer += temp % 10;
//			temp /= 10;
//		}
//
//		if (answer == n)
//		{
//			cout << i;
//			return 0;
//		}
//	}
//	cout << 0;
//	return 0;
//}