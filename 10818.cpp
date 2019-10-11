//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main(void)
//{
//	cin.tie(NULL);
//	ios_base::sync_with_stdio(false);
//
//	int n, num;
//	int max = 1000001;
//	int min = -1000001;
//	vector<int> v;
//
//	cin >> n;
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> num;
//		v.push_back(num);
//	}
//
//	max = v[0];
//	min = v[0];
//
//	for (int i = 0; i < n; i++)
//	{
//		if (max < v[i])
//			max = v[i];
//				  
//		if (min > v[i])
//			min = v[i];
//	}
//
//	cout << min << ' ' << max << endl;
//
//	return 0;
//}

//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//using namespace std;
//
//int main()
//{
//	int n, num;
//	vector<int> v;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> num;
//		v.push_back(num);
//	}
//	sort(v.begin(), v.end());
//	cout << v.front() << " " << v.back() << endl;
//}
