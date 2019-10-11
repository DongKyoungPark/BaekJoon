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
//	int count = 0;	
//	int v[10] = {};
//	int rest[42] = {};
//
//	for (int i = 0; i < 10; i++)
//	{
//		cin >> v[i];
//		rest[v[i] % 42]++;		
//	}
//
//	for (int i = 0; i < 42; i++)
//	{
//		if (rest[i] != 0)
//			count++;
//	}
//
//	cout << count << "\n";
//
//	return 0;
//}