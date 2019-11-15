#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	string s;
	cin >> s;

	sort(s.begin(), s.end());
	reverse(s.begin(), s.end());

	cout << s;	

	return 0;
}