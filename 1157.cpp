#include <iostream>
#include <string>
#define MAX 1000001

using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	char c[MAX];
	int a[26] = {};
	int aSize = sizeof(a) / sizeof(a[0]);
	int max;
	int count = 0;

	cin >> c;

	// 'A'는 아스키코드 65, 'a'는 아스키코드 97
	for (int i = 0; c[i] != NULL; i++)
	{
		// 대문자일 경우 소문자로 
		if (c[i] < 97)
			c[i] += 32;

		// 문자 개수 증가
		a[c[i] - 97]++;
	}

	// 제일 큰 수 찾아서 저장
	max = a[0];
	for (int i = 1; i < aSize; i++)
	{
		if (max < a[i])
		{
			max = a[i];
			count = i;
		}
		// a[i] != 0은 나오지 않은 숫자가 검색될 경우를 방지(ex.한글자 입력한 경우)
		else if (max == a[i] && a[i] != 0)
		{
			count = -1;
		}
	}

	if (count != -1)
		printf("%c", count + 65);
	else
		cout << "?" << "\n";

	return 0;
}