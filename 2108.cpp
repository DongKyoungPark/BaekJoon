//#include <iostream>
//#include <vector>
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
//	int N;
//	int num, avg, width, freq = 0, count = 1, max = 0, sec = 0;
//	double sum = 0;
//	vector<int> arr;
//
//	cin >> N;
//
//	for (int i = 0; i < N; i++)
//	{
//		cin >> num;
//		arr.push_back(num);
//		sum += num;
//	}
//
//	// �ֺ� �˻縦 ���� �ش����� �ʴ� ���� ����.
//	arr.push_back(9999); 
//
//	// ���
//	sum /= N;
//	if (sum - (int)(sum / N) >= 0.5)
//		avg = (int)(sum / N) + 1;
//	else
//		avg = (int)(sum / N);
//
//	//�߾Ӱ�
//	sort(arr.begin(), arr.end());
//
//	//�ֺ�
//	for (int i = 0; i < N; i++)
//	{
//		if (N == 1)
//		{
//			freq = arr[i];
//			break;
//		}
//		else if (i < N && arr[i] == arr[i + 1])
//		{
//			count += 1;
//		}
//		else if (i < N && arr[i] != arr[i + 1])
//		{
//			if (max < count)
//			{
//				max = count;
//				sec = 0; // �ֺ��� ���� ���� ����
//				freq = arr[i];
//			}
//			else if (max == count && sec == 0) // �ֺ��� ������ �ι�° ��
//			{
//				max = count;
//				freq = arr[i];
//				sec = 1; // �ֺ��� ���� ���� �����Ƿ� 1
//			}
//			count = 1;
//		}
//	}
//
//	// ����
//	width = abs(arr[N - 1] - arr[0]);
//
//	printf("%.0f\n%d\n%d\n%d", sum, arr[N / 2], freq, width);
//
//	return 0;
//}