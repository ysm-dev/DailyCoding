#include <iostream>
#include <algorithm>

using namespace std;

// Function prototype
void readInput();
int algorithm();

// Global variables
int Answer;
int N, K, *S;

int main(int argc, char** argv)
{
	int T, test_case;

	freopen("p3.txt", "r", stdin);

	cin >> T;
	for (test_case = 0; test_case < T; test_case++){
		Answer = 0;

		readInput();

		Answer = algorithm();
		
		cout << "Case #" << test_case + 1 << endl;
		cout << Answer << endl;
	}

	return 0;
}

void readInput() {
	cin >> N >> K;
	S = (int*)malloc(sizeof(int)*N);
	for (int i = 0;i < N;i++) cin >> S[i];
}

int algorithm() {
	int R = 0;
	sort(S, S + N);
	for (int i = 0;i < K;i++) {
		R += S[N - 1 - i];
	}
	return R;
}
