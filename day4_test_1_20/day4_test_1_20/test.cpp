#include <iostream>
#include <vector>
#include <string>
using namespace std;

//int main() {
//
//	vector<int> num;
//	vector<int> nums;
//	int a;
//
//	for (int i = 0; i < 4; ++i) {
//		cin >> a;
//		num.push_back(a);
//	}
//
//	int max = num[0];
//	for (int i = 0; i < 4; ++i) {
//
//		if (num[i] > max)
//			max = num[i];
//	}
//
//	for (int i = 0; i <= max; ++i) {
//
//		for (int j = 0; j <= max; ++j) {
//
//			for (int k = 0; k <= max; ++k) {
//
//				if ((i - j == num[0]) && (j - k == num[1]) && (i + j == num[2]) && (j + k == num[3])) {
//					nums.push_back(i);
//					nums.push_back(j);
//					nums.push_back(k);
//				}
//			}
//		}
//	}
//
//	if (nums.size() == 0)
//		cout << "No" << endl;
//
//	for (auto n : nums)
//		cout << n << " ";
//
//	return 0;
//}

//½øÖÆ×ª»»

int main() {

	long int M;
	int N;
	char a;
	string str = "";

	cin >> M >> N;

	while (M) {

		if (M % N >= 10) {

			a = (M % N) - 10 + 'A';
		}
		else {

			a = (M % N) + '0';
		}
		str = a + str;
		M /= N;
	}

	cout << str << endl;

	return 0;
}