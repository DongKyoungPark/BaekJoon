//#include <iostream>
//#include <string>
//using namespace std;
//
//int main(void)
//{
//	cin.tie(NULL);
//	ios_base::sync_with_stdio(false);
//
//	string str;
//	int n;
//	int count;
//
//	cin >> n;
//	count = n;
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> str;
//		int check[101] = {};
//		for (int j = 1; j < str.length(); j++) // ������ ���̸�ŭ
//		{
//			if (str[j-1] != str[j]) // �������ڶ� �ٸ����
//			{
//				if (check[str[j] - 97] == 1) // ������ �������� ������
//				{
//					count--;
//					break;
//				}
//			}
//			check[str[j-1] - 97] = 1;
//		}
//	}
//
//	cout << count << '\n';
//
//	return 0;
//}