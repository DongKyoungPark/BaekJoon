#include <iostream>

using namespace std;

int board[16]; // ü������ ��Ÿ�� �迭
// board[��] = �� ���� ��Ÿ��
// ex) board[2] = 3; (2�� 3��° ĭ�� ���� ����)

bool IsPossible(int _row)
{
	for (int i = 0; i < _row; i++)
	{
		// ���⼭ board[i]�� �̹� ��ġ�� �Ϸ�� ���� �ǹ�
		// �̹� ��ġ�� �Ϸ�� ���� ���� �ٿ� �ְų�, �밢���� ���� ��� ���� ���� �� ����.
		if (board[_row] == board[i] || abs(board[_row] - board[i]) == (_row - i))
		{
			return false;
		}
	}
	return true;
}


void BackTracking(int _row, int _N, int* _count)
{
	// N�ٱ��� ��ġ�� �Ϸ�Ǿ��ٴ� ���� ���� ��� �������� �����ߴٴ� �ǹ��̹Ƿ� _count�� ����
	if (_row == _N)
	{
		(*_count)++;
		return;
	}
	for (int i = 0; i < _N; i++)
	{
		board[_row] = i; // _row���� 0���� _N-1ĭ����(���⼭ i) ���� ���ƺ���
		if (IsPossible(_row) == true)
		{
			// _row���� i��° ĭ�� ���� ���� ���� �����ϸ� _row+1�࿡ ���� ���� �� �մ��� ��Ʈ��ŷ
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