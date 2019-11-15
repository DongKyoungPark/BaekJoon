#include <iostream>

using namespace std;

int arr[9];
bool visited[9];

void BackTracking(int _count, int _N, int _M)
{
	// 원하는 개수(_M개)만큼 골랐다면 수열을 출력하고 재귀를 종료
	if (_count == _M)
	{
		for (int i = 0; i < _M; i++)
		{
			cout << arr[i] << ' ';
		}
		cout << '\n';
		return;
	}

	for (int i = 1; i <= _N; i++)
	{
		// 방문하지 않은(수열에 들어가지 않은) 수가 있다면 수열에 넣고 다음 _count를 탐색
		if (visited[i] == false)
		{
			visited[i] = true; // i는 갔다고 방문 체크
			arr[_count] = i;
			BackTracking(_count + 1, _N, _M); // _count가 M이 될때까지 재귀가 반복
			visited[i] = false; // 되돌아올 때 방문 체크 초기화
		}
	}
}

int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	// 1~N까지의 자연수 중에 중복없이 M개를 고른 수열 구하기
	int N, M;
	int count = 0;
	cin >> N >> M;
	
	BackTracking(count, N, M);

	return 0;
}