/*
#include <iostream>
#include <malloc.h>

using namespace std;

// Function prototype
void readInput();
int algorithm();

// Global variables
int Answer;
int N, **M;

int main(int argc, char** argv)
{
	int T, test_case;

	freopen("p52.txt", "r", stdin);

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
	cin >> N;
	M = (int**)malloc(sizeof(int*)*N);
	for (int i = 0;i < N;i++) {
		M[i] = (int*)malloc(sizeof(int)*N);
	}
	for (int i = 0;i < N;i++)
		for (int j = 0;j < N;j++)
			cin >> M[i][j];
}

int algorithm() {
	int R = 0;
	int sum = 0;
	for (int i = 0;i < N;i++) {
		sum = 0;
		for (int j = 0;j < N;j++) {
			sum += M[i][j];
		}
		if (sum > R) R = sum;
	}

	return R;
}
*/