#include <iostream>

using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int X;
	int sum = 0;	// ���������� ��
	int n = 1;		// ���° ������

	cin >> X;
	while (sum < X) // X�� �ִ� ���� �������� �ձ��� �ݺ�
	{
		sum = (n * (n + 1)) / 2;
		n++;
	}
	if (n % 2 == 1)
		cout << n - 1 - sum + X << '/' << 1 + sum - X; // �������� n++���༭ -1���ְ�
	else
		cout << 1 + sum - X << '/' << n - 1 - sum + X; // sum�� X�� ���̸�ŭ ���� ���ؼ� ���

	return 0;
}