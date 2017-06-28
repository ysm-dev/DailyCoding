/*
#include <iostream>
#include <malloc.h>

using namespace std;

// Function prototype
void readInput();
char algorithm();

// Global variables
char Answer;
int N, M, K;
int *C, *P;

int main(int argc, char** argv)
{
	int T, test_case;

	freopen("p50.txt", "r", stdin);

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
	cin >> N >> M >> K;
	C = (int*)malloc(sizeof(int)*N);
	P = (int*)malloc(sizeof(int)*M);
	for (int i = 0;i < N;i++) cin >> C[i];
	for (int i = 0;i < M;i++) cin >> P[i];
}

char algorithm() {
	char R;
	int sum = 0;
	for (int i = 0;i < N;i++) {
		sum += P[C[i] - 1];
	}
	if (sum <= K) R = 'Y';
	else R = 'N';
		

	return R;
}
*/