#include <iostream>

using namespace std;

int arr[9];
bool visited[9];

void BackTracking(int _count, int _N, int _M)
{
	// ���ϴ� ����(_M��)��ŭ ����ٸ� ������ ����ϰ� ��͸� ����
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
		// �湮���� ����(������ ���� ����) ���� �ִٸ� ������ �ְ� ���� _count�� Ž��
		if (visited[i] == false)
		{
			visited[i] = true; // i�� ���ٰ� �湮 üũ
			arr[_count] = i;
			BackTracking(_count + 1, _N, _M); // _count�� M�� �ɶ����� ��Ͱ� �ݺ�
			visited[i] = false; // �ǵ��ƿ� �� �湮 üũ �ʱ�ȭ
		}
	}
}

int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	// 1~N������ �ڿ��� �߿� �ߺ����� M���� �� ���� ���ϱ�
	int N, M;
	int count = 0;
	cin >> N >> M;
	
	BackTracking(count, N, M);

	return 0;
}