#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	int num, avg, width, freq = 0, count = 1, max = 0, sec = 0;
	double sum = 0;
	vector<int> arr;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> num;
		arr.push_back(num);
		sum += num;
	}

	// 최빈값 검사를 위해 해당하지 않는 수를 넣음.
	arr.push_back(9999); 

	// 평균
	sum /= N;
	if (sum - (int)(sum / N) >= 0.5)
		avg = (int)(sum / N) + 1;
	else
		avg = (int)(sum / N);

	//중앙값
	sort(arr.begin(), arr.end());

	//최빈값
	for (int i = 0; i < N; i++)
	{
		if (N == 1)
		{
			freq = arr[i];
			break;
		}
		else if (i < N && arr[i] == arr[i + 1])
		{
			count += 1;
		}
		else if (i < N && arr[i] != arr[i + 1])
		{
			if (max < count)
			{
				max = count;
				sec = 0; // 최빈값이 같은 것이 없음
				freq = arr[i];
			}
			else if (max == count && sec == 0) // 최빈값이 같ㅌ은 두번째 수
			{
				max = count;
				freq = arr[i];
				sec = 1; // 최빈값이 같은 것이 있으므로 1
			}
			count = 1;
		}
	}

	// 범위
	width = abs(arr[N - 1] - arr[0]);

	printf("%.0f\n%d\n%d\n%d", sum, arr[N / 2], freq, width);

	return 0;
}