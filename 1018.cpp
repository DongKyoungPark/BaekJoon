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
//	// 8*8크기의 체스판으로 만들기(최소의 색칠로)
//	max = N * M;
//
//	// 8*8 체스판의 시작점은 (i,j)
//	for (int i = 0; i < N-7; i++)
//	{
//		for (int j = 0; j < M-7; j++)
//		{
//			// 시작점이 W일때는 x+y가 짝수면 W / 홀수면 B
//			// 시작점이 B일때는 x+y가 홀수면 W / 짝수면 B
//			int Wmod = 0;
//			int Bmod = 0;
//
//			for (int x = i; x < i+8; x++)
//			{
//				for (int y = j; y < j+8; y++)
//				{
//					if ((x + y) % 2 == 0) // 짝수칸(시작지점과 같은색이어야 하는 칸)
//					{
//						if (ChessBoard[x][y] != 'W')
//							Wmod++;
//						else
//							Bmod++;
//					}
//					else 
//					{ // 홀수칸(시작지점과 다른색의 칸)
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