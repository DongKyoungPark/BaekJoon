//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main(void)
//{
//	cin.tie(NULL);
//	ios_base::sync_with_stdio(false);
//
//	vector<vector<char>> ChessBoard;
//	int N, M, max;
//
//	cin >> N >> M;
//
//	for (int i = 0; i < N; i++)
//	{
//		vector<char> temp;
//		for (int j = 0; j < M; j++)
//		{
//			char x;
//			cin >> x;
//			temp.push_back(x);
//		}
//		ChessBoard.push_back(temp);
//	}
//
//	// 8*8ũ���� ü�������� �����(�ּ��� ��ĥ��)
//	max = N * M;
//
//	// 8*8 ü������ �������� (i,j)
//	for (int i = 0; i < N-7; i++)
//	{
//		for (int j = 0; j < M-7; j++)
//		{
//			// �������� W�϶��� x+y�� ¦���� W / Ȧ���� B
//			// �������� B�϶��� x+y�� Ȧ���� W / ¦���� B
//			int Wmod = 0;
//			int Bmod = 0;
//
//			for (int x = i; x < i+8; x++)
//			{
//				for (int y = j; y < j+8; y++)
//				{
//					if ((x + y) % 2 == 0) // ¦��ĭ(���������� �������̾�� �ϴ� ĭ)
//					{
//						if (ChessBoard[x][y] != 'W')
//							Wmod++;
//						else
//							Bmod++;
//					}
//					else 
//					{ // Ȧ��ĭ(���������� �ٸ����� ĭ)
//						if (ChessBoard[x][y] != 'B')
//							Wmod++;
//						else
//							Bmod++;
//					}						
//				}
//			}
//			if (max > min(Wmod, Bmod))
//				max = min(Wmod, Bmod);
//		}
//	}
//
//	cout << max << '\n';
//
//	return 0;
//}