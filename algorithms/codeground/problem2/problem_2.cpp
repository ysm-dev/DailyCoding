#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
int cmp(const void* a, const void* b) { return *(int*)a - *(int*)b; };
int main(void) {
	//freopen("p2.txt", "r", stdin);

	setbuf(stdout, NULL);

	int TC;
	int test_case;
	int N;
	int *arr;
	int *tmp;
	int result;
	int n;
	scanf("%d", &TC);
	for (test_case = 1; test_case <= TC; test_case++) {
		result = 1;
		scanf("%d", &N);
		arr = (int*)malloc(sizeof(int)*N);
		tmp = (int*)malloc(sizeof(int)*N);

		for (int i = 0; i < N; i++) {
			scanf("%d", &arr[i]);
		}

		qsort(arr, N, sizeof(int), cmp);

		int max = 0;
		for (int i = 0; i <N; i++)
		{
			if (arr[i] + N - i>max)max = arr[i] + N - i;
		}
		int cnt = 0;
		for (int i = 0; i < N; i++)
		{
			if (arr[i] + N >= max)cnt++;
		}

		free(arr);
		printf("Case #%d\n", test_case);
		printf("%d\n", cnt);
	}
	return 0;
}