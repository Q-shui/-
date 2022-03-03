#include <iostream>
#include <vector>
#include <string>

using namespace std;

//最小公倍数

int main() {

	int a, b;

	cin >> a >> b;

	int max = (a > b ? a : b);
	int min = (a < b ? a : b);

	if (max % min == 0)
		cout << max << endl;

	else {

		int c = max % min;

		while (max % min != 0) {

			c = max % min;
			max = min;
			min = c;

		}

		cout << (a / c) * (b / c) * c << endl;
	}
		

	return 0;
}


////字符串
//int main() {
//
//	int n;
//	vector<string> strs;
//	int a = 1, b = 1;
//
//	cin >> n;
//
//	for (int i = 0; i < n; ++i) {
//
//		string s;
//		cin >> s;
//		strs.push_back(s);
//	}
//
//	auto p = strs.begin();
//
//	if ((*p).size() < (*(p + 1)).size() && *p < *(p + 1)) {
//
//		while (p != strs.end() - 1) {
//
//			if ((*p).size() > (*(p + 1)).size()) a = 0;
//
//			if (*p > *(p + 1)) b = 0;
//
//			p++;
//		}
//	}
//
//	else if ((*p).size() > (*(p + 1)).size() && *p < *(p + 1)) {
//
//		while (p != strs.end() - 1) {
//
//			if ((*p).size() < (*(p + 1)).size()) a = 0;
//
//			if (*p > *(p + 1)) b = 0;
//
//			p++;
//		}
//	}
//
//	else if ((*p).size() < (*(p + 1)).size() && *p > *(p + 1)) {
//
//		while (p != strs.end() - 1) {
//
//			if ((*p).size() > (*(p + 1)).size()) a = 0;
//
//			if (*p < *(p + 1)) b = 0;
//
//			p++;
//		}
//	}
//
//	else {
//
//		while (p != strs.end() - 1) {
//
//			if ((*p).size() < (*(p + 1)).size()) a = 0;
//
//			if (*p < *(p + 1)) b = 0;
//
//			p++;
//		}
//	}
//
//	if (a == 1 && b == 1) 
//		cout << "both" << endl;
//
//	else if (a != 1 && b == 1) 
//		cout << "lexicographically." << endl;
//
//	else if (a == 1 && b != 1) 
//		cout << "lengths" << endl;
//
//	else 
//		cout << "none" << endl;
//
//	return 0;
//}