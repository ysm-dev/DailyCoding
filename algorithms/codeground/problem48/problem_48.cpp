/*
#include <iostream>
#include <algorithm>

using namespace std;

// Function prototype
void readInput();
int algorithm();

// Global variables
int Answer;
int A, B, D;

int main(int argc, char** argv)
{
	int T, test_case;

	freopen("p48.txt", "r", stdin);

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
	cin >> A >> B >> D;
}

int algorithm() {
	int R = 0;
	
	int C = A - B;
	if (A == D) return 0;
	R = (D - A - 1) / C + 2;

	return R;
}
*/