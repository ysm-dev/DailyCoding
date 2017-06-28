/*
#include <iostream>
#include <string>

using namespace std;

// Function prototype
void readInput();
int algorithm();

// Global variables
int Answer;
string s;

int main(int argc, char** argv)
{
	int T, test_case;

	freopen("p49.txt", "r", stdin);

	cin >> T;
	for (test_case = 0; test_case < T; test_case++) {
		Answer = 0;

		readInput();

		Answer = algorithm();

		cout << "Case #" << test_case + 1 << endl;
		cout << Answer << endl;
	}

	return 0;
}

void readInput() {
	cin >> s;
}

int algorithm() {
	int R = 10000;
	int c[4] = { 0, };
	for (int i = 0;i < s.length();i++) {
		if (s[i] == 'h') c[0]++;
		else if (s[i] == 'e') c[1]++;
		else if (s[i] == 'l') c[2]++;
		else if (s[i] == 'o') c[3]++;
	}
	c[2] /= 2;
	for (int i = 0;i < 4;i++) {
		if (c[i] < R) R = c[i];
	}

	return R;
}
*/