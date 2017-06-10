
#include <iostream>
#include <algorithm>
#define M_PI 3.14159265358979323846

using namespace std;

// Function prototype
void readInput();
int algorithm();
int getScore(float, float);
float getDst(float, float);
float getAgl(float, float);

// Global variables
int Answer;
int R[5], N;
float **P;

int main(int argc, char** argv)
{
	int T, test_case;

	freopen("p4.txt", "r", stdin);

	cin >> T;
	for (test_case = 0; test_case < T; test_case++)
	{
		Answer = 0;

		readInput();

		Answer = algorithm();

		cout << "Case #" << test_case + 1 << endl;
		cout << Answer << endl;
	}

	return 0;
}

void readInput() {
	for (int i = 0;i < 5;i++) cin >> R[i];
	cin >> N;
	P = (float**)malloc(sizeof(float*)*N);
	for (int i = 0;i < N;i++) {
		P[i] = (float*)malloc(sizeof(float) * 2);
		cin >> P[i][0];
		cin >> P[i][1];
	}
}

int algorithm() {
	int result = 0;
	
	for (int i = 0;i < N;i++) {
		result += getScore(P[i][0], P[i][1]);
	}

	return result;
}

int getScore(float x, float y) {
	int result = 0;
	int s[20] = { 6,13,4,18,1,20,5,12,9,14,11,8,16,7,19,3,17,2,15,10 };
	int unit = 18;
	int tmp = (getAgl(x, y) + 9) / 18;
	int idx = tmp % 20;
	result = s[idx];
	if (getDst(x, y) < R[0]) result = 50;
	else if (getDst(x, y) > R[1] && getDst(x, y) < R[2]) result *= 3;
	else if (getDst(x, y) > R[3] && getDst(x, y) < R[4]) result *= 2;
	else if (getDst(x, y) > R[4]) result = 0;
	return result;
}

float getDst(float x, float y) {
	return sqrt(pow(x, 2) + pow(y, 2));
}

float getAgl(float x, float y) {
	float result = atan2f(y, x) * 180.0 / M_PI;
	if (result < 0) result += 360;
	return result;
}
