#include <iostream>

using namespace std;

int board[16]; // 체스판을 나타낼 배열
// board[행] = 열 으로 나타냄
// ex) board[2] = 3; (2행 3번째 칸에 퀸을 놓음)

bool IsPossible(int _row)
{
	for (int i = 0; i < _row; i++)
	{
		// 여기서 board[i]는 이미 배치가 완료된 퀸을 의미
		// 이미 배치가 완료된 퀸과 같은 줄에 있거나, 대각선에 있을 경우 퀸을 놓을 수 없다.
		if (board[_row] == board[i] || abs(board[_row] - board[i]) == (_row - i))
		{
			return false;
		}
	}
	return true;
}


void BackTracking(int _row, int _N, int* _count)
{
	// N줄까지 배치가 완료되었다는 것은 퀸을 모두 놓은것이 성공했다는 의미이므로 _count를 증가
	if (_row == _N)
	{
		(*_count)++;
		return;
	}
	for (int i = 0; i < _N; i++)
	{
		board[_row] = i; // _row행의 0부터 _N-1칸까지(여기서 i) 퀸을 놓아보자
		if (IsPossible(_row) == true)
		{
			// _row행의 i번째 칸에 퀸을 놓는 것이 가능하면 _row+1행에 퀸을 놓을 수 잇는지 백트래킹
			BackTracking(_row + 1, _N, _count);
		}
	}
}

int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	int count = 0;
	
	cin >> N;
	BackTracking(0, N, &count);

	cout << count << '\n';

	return 0;
}