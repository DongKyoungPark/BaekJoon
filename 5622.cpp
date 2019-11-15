#include <iostream>
#include <cstring>

using namespace std;

int Count(int n)
{
	int cnt;
	if (n < 3)			// A B C
		cnt = 3;
	else if (n < 6)		// D E F
		cnt = 4;
	else if (n < 9)		// G H I
		cnt = 5;
	else if (n < 12)	// J K L	
		cnt = 6;
	else if (n < 15)	// M N O
		cnt = 7;
	else if (n < 19)	// P Q R S
		cnt = 8;
	else if (n < 22)	// T U V
		cnt = 9;
	else if (n < 26)	// W X Y Z
		cnt = 10;
	else
		cnt = 0;

	return cnt;
}

int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	char str[16];
	int strLength;
	int strToInt;
	int time1 = 0;
	int time2 = 0;

	cin >> str;
	getchar();
	strLength = strlen(str); // 문자열 길이
	if (strLength < 2 || strLength > 15)
		return 0;

	for (int i = 0; i < strLength; i++)
	{
		strToInt = str[i] - 65;
		time2 = Count(strToInt);
		time1 += time2;
	}
	cout << time1 << '\n';

	return 0;
}