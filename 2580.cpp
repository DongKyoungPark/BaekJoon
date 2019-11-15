#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int sdoku[9][9];
int vSize;
bool check;
vector <pair<int, int>> v;

bool Check(int _y, int _x, int _num)
{
	// Horizon
	for (int i = 0; i < 9; i++)
	{
		if (sdoku[_y][i] == _num)
			return false;
	}

	// Vertical
	for (int i = 0; i < 9; i++)
	{
		if (sdoku[i][_x] == _num)
			return false;
	}

	// Square
	int dx = (_x / 3) * 3;
	int dy = (_y / 3) * 3;
	for (int i = dy; i < 3 + dy; i++)
	{
		for (int j = dx; j < 3 + dx; j++)
		{
			if (sdoku[i][j] == _num)
				return false;
		}
	}
	return true;
}

void dfs(int _d)
{
	if (check)
		return;
	if (_d == vSize)
	{
		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 9; j++)
			{
				cout << sdoku[i][j] << ' ';
			}
			cout << '\n';
		}
		check = true;
		return;
	}

	for (int i = 1; i <= 9; i++)
	{
		int y = v[_d].first;
		int x = v[_d].second;

		// BackTracking
		if (Check(y, x, i))  // 빈칸을 채웠을 때 스도쿠 규칙을 만족하는지 체크
		{
			sdoku[y][x] = i; // 빈칸을 채운다.
			dfs(_d + 1); 	 // 다음 좌표로 넘어간다.
			sdoku[y][x] = 0; // 다시 돌아왔을대, 다음 탐색을 위해 다시 빈칸으로 만든다.
		}
	}
}

int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);


	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cin >> sdoku[i][j];
			if (sdoku[i][j] == 0)
				v.push_back(make_pair(i, j));
		}
	}

	vSize = v.size();
	dfs(0);

	return 0;
}