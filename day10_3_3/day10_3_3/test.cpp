#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool checkWon(vector<vector<int> > board) {

	int size = (*board.begin()).size();
	bool check = false;
	//横
	for (auto row : board) {

		int num = 0;
		for (auto ele : row) {

			if (ele == 1)
				num++;
		}
		if (num == size)
			check = true;
	}

	//竖
	for (int i = 0; i < board.size(); ++i) {

		int num = 0;
		for (int j = 0; j < board.size(); ++j) {

			if (board[i][j] == i)
				num++;
		}

		if (num == size)
			check = true;
	}
	//主对角线
	int num = 0;
	for (int i = 0; i < board.size(); ++i) {

		
		if (board[i][i] == 1)
			num++;
	}

	if (num == size)
		check == true;

	//副对角线
	int num = 0;
	for (int i = 0; i < size; ++i) {

		if (board[i][size - i - 1])
			num++;
	}

	if (num == size)
		check = true;

	return check;

}

int main() {

	vector<vector<int>> board;

	return 0;
}
//
//int main() {
//
//	vector<string> strs;
//	string str;
//	
//	vector<int> score;
//
//	while (cin >> str)
//		strs.push_back(str);
//
//	for (auto pstrs : strs) {
//
//		int upperletters = 0, lowerletters = 0, characters = 0, nums = 0, sum = 0;
//
//		for (auto pstr : pstrs) {
//
//			if (pstr <= 57 && pstr >= 48)
//				nums++;
//			if (pstr <= 90 && pstr >= 65)
//				upperletters++;
//			if (pstr <= 122 && pstr >= 97)
//				lowerletters++;
//			if ((pstr <= 47 && pstr >= 33) 
//				|| (pstr <= 64 && pstr >= 58) 
//				|| (pstr <= 96 && pstr >= 91) 
//				|| (pstr <= 126 && pstr >= 123))
//				characters++;
//		}
//
//		if (pstrs.size() <= 4)
//			sum += 5;
//		else if (pstrs.size() <= 7 && pstrs.size() >= 5)
//			sum += 10;
//		else
//			sum += 25;
//
//		if (upperletters == 0 && lowerletters == 0)
//			sum += 0;
//		else if (upperletters == 0 && lowerletters != 0)
//			sum += 10;
//		else if (upperletters != 0 && lowerletters == 0)
//			sum += 10;
//		else
//			sum += 20;
//
//		if (nums == 0)
//			sum += 0;
//		else if (nums == 1)
//			sum += 10;
//		else
//			sum += 20;
//
//		if (characters == 0)
//			sum += 0;
//		else if (characters == 1)
//			sum += 10;
//		else
//			sum += 25;
//
//		if ((upperletters != 0 || lowerletters != 0) && nums != 0 && characters == 0)
//			sum += 2;
//		else if ((upperletters != 0 || lowerletters != 0) && nums != 0 && characters != 0)
//			sum += 3;
//		else
//			sum += 5;
//
//		score.push_back(sum);
//
//	}
//
//	for (auto n : score) {
//
//		if (n >= 90)
//			cout << "VERY_SCURE" << endl;
//		else if (n >= 80 && n < 90)
//			cout << "SCURE" << endl;
//		else if (n >= 70 && n < 80)
//			cout << "VERY_STRONG" << endl;
//		else if (n >= 60 && n < 70)
//			cout << "STRONG" << endl;
//		else if (n >= 50 && n < 60)
//			cout << "AVERAGE" << endl;
//		else if (n >= 25 && n < 50)
//			cout << "WEAK" << endl;
//		else
//			cout << "VERY_WEAK" << endl;
//	}
//
//	return 0;
//}