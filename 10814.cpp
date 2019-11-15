#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, string> _a, pair<int, string> _b)
{
	return _a.first < _b.first; // pair의 int형 부분(나이)을 비교해 나이가 적은 순으로 정렬
}

int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	// pair<int,string>를 담을 vector를 N크기로 초기화
	vector<pair<int, string>> info(N); 

	for (int i = 0; i < N; i++)
	{
		// 나이, 이름 순으로 입력
		cin >> info[i].first >> info[i].second;
	}

	// pair로 묶여있는 데이터를 정렬할때는 sort()사용하면 안됨.
	// stable_sort : 정렬 기준을 제외한 다른 요소들의 순서가 정렬 전과 같이 유지
	stable_sort(info.begin(), info.end(), compare);

	for (int i = 0; i < N; i++)
	{
		cout << info[i].first << ' ' << info[i].second << '\n';
	}

	return 0;
}