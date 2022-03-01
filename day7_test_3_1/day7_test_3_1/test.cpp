#include <iostream>
#include <vector>
#include <stack>
#include <string>

using namespace std;

bool chkParenthesis(string A, int n) {

	stack<char> a;

	auto p = A.begin();

	while (p != A.end()) {

		if (*p == '(') {

			a.push(*p);
			p++;
		}

		else if (*p == ')' && a.empty())
			return false;

		else if (*p == ')' && !a.empty()) {

			a.pop();
			p++;
		}
		else
			return false;
	}

	return true;
}

int main() {

	string A = "()(()())";
	int n = 6;
	cout << chkParenthesis(A, n) << endl;;

	return 0;
}

//Fic
//int main()
//{
//    int N;
//    int len;
//
//    cin >> N;
//
//    vector<int> Fic;
//
//    int a = 0, b = 1;
//    Fic.push_back(a);
//    Fic.push_back(b);
//
//    while (b < 1000000) {
//
//        Fic.push_back(a + b);
//        int c = a + b;
//        a = b;
//        b = c;
//    }
//
//    auto p = Fic.begin();
//
//    while (*p < N) {
//        p++;
//        if (p == Fic.end()) {
//            len = N - *(p - 1);
//            break;
//        }
//    }
//    if (p != Fic.end()) {
//
//        len = ((*p - N) > (N - *(p - 1)) ? (N - *(p - 1)) : (*p - N));
//    }
//
//    cout << len << endl;
//
//    return 0;
//}