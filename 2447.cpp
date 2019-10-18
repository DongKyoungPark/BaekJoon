//#include <iostream>
//
//using namespace std;
//
//void draw(int x, int y) {
//	while (x != 0) {
//		if (x % 3 == 1 && y % 3 == 1) {
//			cout << " ";
//			return;
//		}
//		x /= 3;
//		y /= 3;
//	}
//	cout << "*";
//}
//
//void printSth(int n) {
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			draw(i, j);
//		}
//		cout << "\n";
//	}
//}
//
//int main(void) {
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//
//	int n;
//	cin >> n;
//
//	printSth(n);
//
//	return 0;
//}
