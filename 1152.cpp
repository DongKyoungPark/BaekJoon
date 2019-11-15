#include <iostream>
#include <string>
#define MAX 1000001

using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	string s;
	int count = 0;

	// string 타입에 공백을 허용하는 입력을 받음
	getline(cin, s);

	if (s.length() >= 1)
	{
		if (s[0] != ' ')
			count++;
	}

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == ' ')
		{
			//1. 공백 다음 공백 -> "단어 (공백) (공백) 단어" 의 경우뿐이므로, 단어를 센다.
			if (s[i + 1] == ' ')
				count++;
			//2. 공백 다음 문자 -> "단어 (공백) 단어" 의 경우이므로, 단어를 센다.
			else if (s[i + 1])
				count++;
		}
	}
	cout << count << "\n";

	return 0;
}