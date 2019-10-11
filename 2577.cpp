//#include <iostream>
//
//using namespace std;
//
//int main(void)
//{
//	cin.tie(NULL);
//	ios_base::sync_with_stdio(false);
//
//	int a, b, c;
//
//	cin >> a >> b >> c;
//
//	int result = a * b * c;
//	int v[10] = {};
//
//	while (result != 0)
//	{
//		int temp = 0;
//		temp = result % 10;
//
//		v[temp]++;
//
//		result /= 10;
//	}
//
//	for (int i = 0; i < 10; i++)
//		cout << v[i] << "\n";
//
//	return 0;
//}