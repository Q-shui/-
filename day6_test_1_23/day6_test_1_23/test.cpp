#include <iostream>
#include <string>

using namespace std;

int main() {

	string str = "";
	int num = 0;

	getline(cin, str);		

	for (int i = 0; i < str.size(); ++i) {

		if ((i == 0) && (str[i] == '+' || str[i] == '-'))
			continue;

		if (str[i] < '0' || str[i] > '9') {
			num = 0;
			break;
		}

		num *= 10;
		num += (str[i] - 48);
	}

	if (str[0] == '-')
		num *= -1;
	

	cout << num << endl;

	return 0;
}