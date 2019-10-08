#include <iostream>

using namespace std;

int main(void)
{
	int a;

	cin >> a;

	if (a % 400 == 0)
		cout << 1 << endl;
	else if((a %4 ==0) && (a%100!=0))
		cout << 1 << endl;
	else
		cout << 0 << endl;

	return 0;
}