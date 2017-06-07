#include <stdio.h>
#include <malloc.h>

int main(void) {
	setbuf(stdout, NULL);

	int TC;
	int test_case;
	int N;
	int *arr;
	int result;
	scanf("%d", &TC);
	for (test_case = 1; test_case <= TC; test_case++) {
		result = 0;
		scanf("%d", &N);
		arr = (int*)malloc(sizeof(int)*N);
		for (int i = 0; i < N; i++) {
			scanf("%d", &arr[i]);
			result ^= arr[i];
		}
		free(arr);
		printf("Case #%d\n", test_case);
		printf("%d\n", result);
	}

	return 0;
}