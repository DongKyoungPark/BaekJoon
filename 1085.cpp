#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int x, y;
	int w, h;

	cin >> x >> y >> w >> h;
	int edge = min(w - x, x);
	edge = min(edge, min(h - y, y));
	cout << edge;

	return 0;
}