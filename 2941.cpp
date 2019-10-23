//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//vector<string> cro = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
//
//int main(void)
//{
//	cin.tie(NULL);
//	ios_base::sync_with_stdio(false);
//
//	string str;
//
//	getline(cin, str, '\n');
//
//	int index = 0;				// cro를 검색할 위치
//	int strSize = str.size();	// 크로아티아 알파벳 숫자. 초기값은 str의 길이
//	int temp = 100;				// 현재 index위치에서 cor가 가장 처음 나오는 위치
//	int tempCro = -1;			// 현재 index위치에서 가장 처음 나오는 cro의 번호
//
//	while (index < str.size())
//	{
//		temp = 100;				// 초기값은 가장 큰 숫자로 (cro가 나오지 않을 범위의)
//		tempCro = -1;			// 초기값은 가장 작은 숫자로 (cro가 나오지 않을 범위)
//
//		for (int i = 0; i < cro.size(); i++) // 8개의 크로아티아 알파벳을 조사
//		{
//			// index에서 부터 
//			if (str.find(cro[i], index) != -1 && temp > str.find(cro[i], index))
//			{
//				// 현재 index기준으로 가장 앞에 나오는 cro의 위치를 temp에 저장
//				temp = str.find(cro[i], index);
//				// 현재 cro의 번호를 tempCro에 저장
//				tempCro = i;
//			}
//		}
//		if (tempCro != -1) // index위치에서 cro가 하나라도 나왔다면
//		{
//			// 현재 index기준으로 가장 앞에 나오는 cro의 취이 + 그 cro의 길이
//			index = temp + cro[tempCro].size();
//			// cro의 size-1만큼 strSize에서 빼줌
//			strSize -= cro[tempCro].size() - 1;
//			// 'z='가 1 글자이므로, 알파벳 2글자가 1글자로 줄어드는 것이니 1만큼 빼줌
//		}
//		else // index위치에서 cro가 하나도 없으면 브레이크
//			break;
//	}
//
//	cout << strSize << '\n';
//
//	return 0;
//}