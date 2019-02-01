/*	2.2-2
	Consider sorting n numbers stored in array A by first finding the smallest element
of A and exchanging it with the element in A[1]. Then find the second smallest
element of A, and exchange it with A[2]. Continue in this manner for the first n1
elements of A. Write pseudocode for this algorithm, which is known as selection
sort. What loop invariant does this algorithm maintain? Why does it need to run
for only the first n  1 elements, rather than for all n elements? Give the best-case
and worst-case running times of selection sort in ‚the Θ-notation.
*/
/*
	worst case : O(n^2)
	best case : O(n^2)
	loop invariants :
		initialization : i = 1일때 list[0] 까지는 이미 정렬되어있음, 원소가 하나이기 때문에
		maintenance : i = k 일때 list[k-1]까지는 이미 정렬되어있음, 한 loop에서 list[i] 값은 list[i] ~list[n-1]까지의 값 중 최소로 결정되기 때문에
		list[k-1]까지 오름차순으로 정렬되어있음
		Termination : ?
	
	알고리즘은 n-1번쨰 원소까지 반복한다. n까지 반복할 필요가 없는 이유는
	n-1번째 loop에서 list[n-1]와 list[n]을 비교하고 가장 큰값이 마지막 인덱스에 배치되기 때문.
*/
#include <stdio.h>
#define MAX 100000

int main(void)
{
	int n, i,j;
	int list[MAX];
	int small = 0;
	int tmp;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &list[i]);
	}
	for (i = 0; i < n-1; i++) { 
		small = i;
		for (j = i + 1; j < n; j++) {
			if (list[small] > list[j])
				small = j;
		}
		tmp = list[small];
		list[small] = list[i];
		list[i] = tmp;
	}
	for (i = 0; i < n; i++) {
		printf("%d ", list[i]);
	}

}