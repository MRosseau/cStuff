/*
 *by Micah Rosseau, HW3 Part 2
 */

#include <stdio.h>

int main(void) {
	
	int aa;
	int bb;
	printf("insert a number for \"a\" and press enter:\n");
	scanf("%d", &aa);
	printf("insert a number for \"b\" and press enter:\n");
	scanf("%d", &bb);
	gcd(aa, bb);
	return 0;
} 

void gcd(int a, int b) {
	if(b==0) {
		printf("%d\n", a);
	}
	else {
		gcd(b, a % b);
	}
}
