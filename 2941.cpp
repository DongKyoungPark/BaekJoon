//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//vector<string> cro = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
//
//int main(void)
//{
//	cin.tie(NULL);
//	ios_base::sync_with_stdio(false);
//
//	string str;
//
//	getline(cin, str, '\n');
//
//	int index = 0;				// cro�� �˻��� ��ġ
//	int strSize = str.size();	// ũ�ξ�Ƽ�� ���ĺ� ����. �ʱⰪ�� str�� ����
//	int temp = 100;				// ���� index��ġ���� cor�� ���� ó�� ������ ��ġ
//	int tempCro = -1;			// ���� index��ġ���� ���� ó�� ������ cro�� ��ȣ
//
//	while (index < str.size())
//	{
//		temp = 100;				// �ʱⰪ�� ���� ū ���ڷ� (cro�� ������ ���� ������)
//		tempCro = -1;			// �ʱⰪ�� ���� ���� ���ڷ� (cro�� ������ ���� ����)
//
//		for (int i = 0; i < cro.size(); i++) // 8���� ũ�ξ�Ƽ�� ���ĺ��� ����
//		{
//			// index���� ���� 
//			if (str.find(cro[i], index) != -1 && temp > str.find(cro[i], index))
//			{
//				// ���� index�������� ���� �տ� ������ cro�� ��ġ�� temp�� ����
//				temp = str.find(cro[i], index);
//				// ���� cro�� ��ȣ�� tempCro�� ����
//				tempCro = i;
//			}
//		}
//		if (tempCro != -1) // index��ġ���� cro�� �ϳ��� ���Դٸ�
//		{
//			// ���� index�������� ���� �տ� ������ cro�� ���� + �� cro�� ����
//			index = temp + cro[tempCro].size();
//			// cro�� size-1��ŭ strSize���� ����
//			strSize -= cro[tempCro].size() - 1;
//			// 'z='�� 1 �����̹Ƿ�, ���ĺ� 2���ڰ� 1���ڷ� �پ��� ���̴� 1��ŭ ����
//		}
//		else // index��ġ���� cro�� �ϳ��� ������ �극��ũ
//			break;
//	}
//
//	cout << strSize << '\n';
//
//	return 0;
//}