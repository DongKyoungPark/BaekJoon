//#include <iostream>
//
//using namespace std;
//
//int arr[10];
//
//void BackTracking(int _count, int _N, int _M)
//{
//	// ���ϴ� ����(_M��)��ŭ ����ٸ� ������ ����ϰ� ��͸� ����
//	if (_count == _M)
//	{
//		bool flag = true; // �ϼ��� ������ �񳻸��������� üũ
//		for (int i = 0; i < _M-1; i++)
//		{
//			if (arr[i] > arr[i + 1])
//				flag = false;
//		}
//		if (flag == true)
//		{
//			for (int i = 0; i < _M; i++)
//			{
//				cout << arr[i] << ' ';
//			}
//			cout << '\n';
//		}
//		return;
//	}
//	
//	for (int i = 1; i <= _N; i++)
//	{
//		arr[_count] = i;
//		BackTracking(_count + 1, _N, _M); // count�� M�� �ɶ����� ��Ͱ� �ݺ�
//	}
//}
//
//int main(void)
//{
//	cin.tie(NULL);
//	ios_base::sync_with_stdio(false);
//
//	int n, m;
//	int count = 0;
//
//	cin >> n >> m;
//
//	BackTracking(count, n, m);
//
//	return 0;
//}