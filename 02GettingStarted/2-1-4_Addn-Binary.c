/*
	2.1.4
	Consider the problem of adding two n - bit binary integers, stored in two n - element
	arrays A and B.The sum of the two integers should be stored in binary form in an (n + 1)-element array C.
	State the problem formally and write pseudocode 
	for adding the two integers.
*/
#include <stdio.h>
#define MAX 100000

int main(void)
{
	int n, i;
	char aBinary[MAX] = { 0 };// input ex) 11011
	char bBinary[MAX] = { 0 };
	short cBinary[MAX + 1] = { 0 };
	short carry = 0;
	scanf("%d", &n); // size
	getchar();
	for (i = 0; i < n; i++){
		scanf("%c", &aBinary[i]);
	}
	getchar();
	for (i = 0; i < n; i++){
		scanf("%c", &bBinary[i]);
	}
	
	for (i = n - 1; i >= 0; i--){
		cBinary[i] = ((aBinary[i] - '0') + (bBinary[i] - '0') + carry) % 2;
		carry = ((aBinary[i] - '0') + (bBinary[i] - '0') + carry) / 2;
	}

	if (carry == 1){
		printf("1");
	}
	for (i = 0; i < n; i++){
		printf("%hd", cBinary[i]);
	}

}