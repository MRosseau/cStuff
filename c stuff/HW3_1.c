/*
 *by Micah Rosseau, HW3 Part 1
 */

#include <stdio.h>

int main(void) {
	int one;
	int two;
	int three;
	printf("insert first number and press enter:\n");
	scanf("%d", &one);
	printf("insert second number and press enter:\n");
	scanf("%d", &two);
	printf("insert thrid number and press enter;\n");
	scanf("%d", &three);
	threeNumbers(one, two, three);

	return 0;
} 

void threeNumbers(int uno, int dos, int tres) {
	int tmp;
	if(uno <= dos && dos <= tres) {
		printf("%d < %d < %d\n", uno, dos, tres);
		}
	else if(uno > dos) {
		tmp = uno;
		uno = dos;
		dos = tmp;
		threeNumbers(uno, dos, tres);
		}
	else if(dos > tres) {
		tmp = dos;
		dos = tres;
		tres = tmp;
		threeNumbers(uno, dos, tres);
		}
	else if(uno > tres) {
		tmp = uno;
		uno = tres;
		tres = tmp;
		threeNumbers(uno, dos, tres);
		}
}
