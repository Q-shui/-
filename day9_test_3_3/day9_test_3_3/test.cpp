#include <iostream>
#include <vector>

using namespace std;

int FactorialLess(int a, int b) {

	if (b == 1)
		return a;

	return a * FactorialLess(a - 1, b - 1);
}

int Factorial(int b) {

	if (b == 1)
		return b;

	return b * Factorial(b - 1);
}

int main() {

	vector<int> a, b;
	int i, j;

	while (cin >> i >> j) {

		a.push_back(i);
		b.push_back(j);
	}
	
	auto pa = a.begin();
	auto pb = b.begin();

	while (pa != a.end()) {

		cout << FactorialLess(*pa + *pb, *pb) / Factorial(*pb) << endl;

		pa++;
		pb++;
	}

	return 0;
}

//int Add(int a, int b) {
//
//	if (b == 0)
//		return a;
//
//	int sum = a ^ b;
//	int carry = (a & b) << 1;
//
//	return Add(sum, carry);
//}
//
//int main() {
//
//	int a = 11, b = -2;
//
//	cout << Add(a, b) << endl;
//
//	return 0;
//}